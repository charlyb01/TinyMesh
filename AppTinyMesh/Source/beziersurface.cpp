#include "beziersurface.h"


BezierSurface::BezierSurface(const unsigned xLength, const unsigned yLength)
	: n(xLength), m(yLength)
{
	unsigned i, j;
	std::random_device rd;
	std::default_random_engine engine = std::default_random_engine(rd());

	ctrl.reserve(n);
	for (i = 0; i < n; i++)
	{
		ctrl.push_back(std::vector<Vector>());
		ctrl.at(i).reserve(m);
		for (j = 0; j < m; j++)
			ctrl.at(i).push_back(generateRandomPoint(engine));
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
	Vector bezier = Vector(0.0);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			bezier += ctrl.at(i).at(j) *B(u, i, n)* B(v, j, m);
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
	const unsigned xRes = xResolution + 1, 
				   yRes = yResolution + 1;
	unsigned i, j;
	QVector<Vector> vertices;
	QVector<Vector> normals;
	QVector<int> varray;
	QVector<int> narray;
	vertices.reserve(xRes * yRes);
	normals.push_back(Vector::Y);
	varray.reserve(6 * vertices.capacity());
	narray.reserve(6 * vertices.capacity());

	for (i = 0; i < xRes; i++)
	{
		for (j = 0; j < yRes; j++)
		{
			vertices.push_back(P(double(i) / xResolution, double(j) / yResolution));

			if (i < xResolution && j < yResolution)
			{
				varray.push_back(i * xRes + j);
				varray.push_back((i + 1) * xRes + j);
				varray.push_back(i * xRes + (j + 1));
			
				varray.push_back((i + 1) * xRes + j);
				varray.push_back((i + 1) * xRes + (j + 1));
				varray.push_back(i * xRes + (j + 1));

				narray.push_back(0); narray.push_back(0);
				narray.push_back(0); narray.push_back(0);
				narray.push_back(0); narray.push_back(0);
			}
		}
	}

	return Mesh(vertices, normals, varray, narray);
}
