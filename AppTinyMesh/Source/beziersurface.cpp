#include "beziersurface.h"


BezierSurface::BezierSurface(const unsigned xLength, const unsigned yLength,
	const bool xLiberty, const bool yLiberty)
	: n(xLength), m(yLength)
{
	unsigned i, j;
	Vector p = Vector(1.);
	std::random_device rd;
	std::default_random_engine engine = std::default_random_engine(rd());

	ctrl.reserve(n);
	for (i = 0; i < n; i++)
	{
		ctrl.push_back(std::vector<Vector>());
		ctrl.at(i).reserve(m);

		if (i > 0)
			p = generateRegularRandomPoint(ctrl.at(i-1).at(0), engine, xLiberty);
		
		ctrl.at(i).push_back(p);

		for (j = 1; j < m; j++)
		{
			p = generateRegularRandomPoint(p, engine, yLiberty);
			ctrl.at(i).push_back(p);
		}
	}
}


/**
* @brief Evaluate point on surface at (u,v) coordinates
* 
* @param u : coordinate on first bezier curve
* @param v : coordinate on second bezier curve
*/
Vector BezierSurface::P(const double u, const double v) const
{
	unsigned i, j;
	const unsigned n1 = n - 1;
	const unsigned m1 = m - 1;
	Vector bezier = Vector(0.0);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			bezier += ctrl.at(i).at(j) *B(u, i, n1)* B(v, j, m1);
	}

	return bezier;
}


void BezierSurface::translate(const Vector& t)
{
	unsigned i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			ctrl.at(i).at(j) += t;
	}
}

void BezierSurface::rotate(const Mat4& r, const Vector& c)
{
	unsigned i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			ctrl.at(i).at(j) -= c;
			ctrl.at(i).at(j) = r(ctrl.at(i).at(j));
			ctrl.at(i).at(j) += c;
		}
	}
}


Box BezierSurface::getBox() const
{
	unsigned i, j;
	Vector min, max;
	min = max = ctrl.at(0).at(0);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (ctrl.at(i).at(j) < min)
				min = ctrl.at(i).at(j);

			else if (ctrl.at(i).at(j) > max)
				max = ctrl.at(i).at(j);
		}
	}

	return Box(min, max);
}

Mesh BezierSurface::getMesh(const unsigned xResolution, const unsigned yResolution) const
{
	Mesh mesh;
	const unsigned xRes = xResolution + 1, 
				   yRes = yResolution + 1;
	unsigned i, j;
	QVector<Vector> vertices;
	QVector<int> varray;
	vertices.reserve(xRes * yRes);
	varray.reserve(6 * vertices.capacity());

	for (i = 0; i < xRes; i++)
	{
		for (j = 0; j < yRes; j++)
		{
			vertices.push_back(P(double(i) / xResolution, double(j) / yResolution));

			if (i < xResolution && j < yResolution)
			{
				varray.push_back(i * yRes + j);
				varray.push_back((i + 1) * yRes + j);
				varray.push_back(i * yRes + (j + 1));
			
				varray.push_back((i + 1) * yRes + j);
				varray.push_back((i + 1) * yRes + (j + 1));
				varray.push_back(i * yRes + (j + 1));
			}
		}
	}

	mesh = Mesh(vertices, varray);
	mesh.SmoothNormals();
	return mesh;
}
