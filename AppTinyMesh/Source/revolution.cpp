#include "revolution.h"

Revolution::Revolution(const unsigned _n, const Vector& o, const Vector& d) 
	: n(_n), origin(o), direction(d)
{
	unsigned i;
	Vector p = Vector(0.);
	std::random_device rd;
	std::default_random_engine engine = std::default_random_engine(rd());

	ctrl.reserve(n);
	for (i = 0; i < n; i++)
	{
		p = generateRandomPoint(p, engine);
		ctrl.push_back(p);
	}
}


/**
* @brief Evaluate point on curve
*
* @param u : coordinate on bezier curve
*/
Vector Revolution::P(const double u) const
{
	unsigned i;
	Vector bezier = Vector(0.0);
	for (i = 0; i < n; i++)
	{
			bezier += ctrl.at(i) * B(u, i, n);
	}

	return bezier;
}


void Revolution::translate(const Vector& t)
{
	unsigned i;
	for (i = 0; i < n; i++)
		ctrl.at(i) += t;
}

void Revolution::rotate(const Mat4& r, const Vector& c)
{
	unsigned i;
	for (i = 0; i < n; i++)
	{
		ctrl.at(i) -= c;
		ctrl.at(i) = r(ctrl.at(i));
		ctrl.at(i) += c;
	}
}


Box Revolution::getBox() const
{
	unsigned i;
	Vector min, max;
	min = max = ctrl.at(0);

	for (i = 1; i < n; i++)
	{
		if (ctrl.at(i) < min)
			min = ctrl.at(i);

		else if (ctrl.at(i) > max)
			max = ctrl.at(i);
	}

	return Box(min, max);
}
Mesh Revolution::getMesh(const unsigned curveResolution, const unsigned circleResolution) const
{
	Mesh mesh;
	const unsigned curveRes = curveResolution + 1,
		circleRes = circleResolution + 1;
	unsigned i, j;
	const double rotationStep = Math::PI * 2 / circleResolution;
	Vector pi, pij;
	QVector<Vector> vertices;
	QVector<int> varray;
	vertices.reserve(curveRes * circleRes);
	varray.reserve(6 * vertices.capacity());

	for (i = 0; i < curveRes; i++)
	{
		pi = P(double(i) / curveResolution) - origin;
		for (j = 0; j < circleRes; j++)
		{
			pij = Mat4::Rotation(direction, rotationStep * j)(pi) + origin;
			vertices.push_back(pij);

			if (i < curveResolution && j < circleResolution)
			{
				varray.push_back(i * circleRes + j);
				varray.push_back((i + 1) * circleRes + j);
				varray.push_back(i * circleRes + (j + 1));

				varray.push_back((i + 1) * circleRes + j);
				varray.push_back((i + 1) * circleRes + (j + 1));
				varray.push_back(i * circleRes + (j + 1));
			}
		}
	}

	mesh = Mesh(vertices, varray);
	mesh.SmoothNormals();
	return mesh;
}
