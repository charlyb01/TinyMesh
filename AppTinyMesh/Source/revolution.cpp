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
	const unsigned curveRes = curveResolution + 1,
		circleRes = circleResolution + 1;
	unsigned i, j;
	const double rotationStep = Math::PI * 2 / circleResolution;
	Vector p;
	QVector<Vector> vertices;
	QVector<Vector> normals;
	QVector<int> varray;
	QVector<int> narray;
	vertices.reserve(curveRes * circleRes);
	normals.push_back(Vector::Y);
	varray.reserve(6 * vertices.capacity());
	narray.reserve(6 * vertices.capacity());

	for (i = 0; i < curveRes; i++)
	{
		for (j = 0; j < circleRes; j++)
		{
			p = P(double(i) / curveResolution) - origin;
			p = Mat4::Rotation(direction, j * rotationStep)(p) + origin;
			vertices.push_back(p);

			if (i < curveResolution && j < circleResolution)
			{
				varray.push_back(i * curveRes + j);
				varray.push_back((i + 1) * curveRes + j);
				varray.push_back(i * curveRes + (j + 1));

				varray.push_back((i + 1) * curveRes + j);
				varray.push_back((i + 1) * curveRes + (j + 1));
				varray.push_back(i * curveRes + (j + 1));

				narray.push_back(0); narray.push_back(0);
				narray.push_back(0); narray.push_back(0);
				narray.push_back(0); narray.push_back(0);
			}
		}
	}

	return Mesh(vertices, normals, varray, narray);
}
