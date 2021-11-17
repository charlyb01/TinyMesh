#include "heightfield.h"
#include <QtGui/qimage.h>


HeightField::HeightField(const QString& path, const Box& _domain)
	: ScalarField(_domain)
{
	unsigned i, j;
	QImage image;
	image.load(path);
	const double zStep = (domain[1][2] - domain[0][2]) / 255;

	nx = image.width();
	ny = image.height();
	dx = (domain[1][0] - domain[0][0]) / (nx - 1);
	dy = (domain[1][1] - domain[0][1]) / (ny - 1);
	idx = 1 / dx;
	idy = 1 / dy;

	values.resize(nx * ny);
	for (i = 0; i < nx; i++)
		for (j = 0; j < ny; j++)
			values.at(index(i, j)) = image.pixelColor(i, j).red() * zStep + domain[0][2];
}


Mesh HeightField::getMesh() const
{
	Mesh mesh;
	const unsigned _nx = nx - 1,
		_ny = ny - 1;
	unsigned i, j;
	double x, y;
	QVector<Vector> vertices;
	QVector<int> varray;
	vertices.reserve(nx * ny);
	varray.reserve(6 * vertices.capacity());

	for (i = 0; i < nx; i++)
	{
		for (j = 0; j < ny; j++)
		{
			x = domain[0][0] + i * dx;
			y = domain[0][1] + j * dy;
			vertices.push_back(Vector(x, y, values.at(index(i, j))));

			if (i < _nx && j < _ny)
			{
				varray.push_back(i * ny + j);
				varray.push_back((i + 1) * ny + j);
				varray.push_back(i * ny + (j + 1));

				varray.push_back((i + 1) * ny + j);
				varray.push_back((i + 1) * ny + (j + 1));
				varray.push_back(i * ny + (j + 1));
			}
		}
	}

	mesh = Mesh(vertices, varray);
	mesh.SmoothNormals();
	return mesh;
}


Vector HeightField::Normal(const unsigned i, const unsigned j) const
{
	return Vector(-Gradient(i, j), 1.0);
}

double HeightField::Slope(const unsigned i, const unsigned j) const
{
	return Norm(Gradient(i, j));
}


ScalarField HeightField::Slopes() const
{
	unsigned i, j;
	ScalarField sf(*this);
	for (i = 0; i < nx; i++)
		for (j = 0; j < ny; j++)
			sf[index(i, j)] = Slope(i, j);

	return sf;
}
