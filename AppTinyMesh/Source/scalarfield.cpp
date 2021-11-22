#include "scalarfield.h"
#include <QtGui/qimage.h>
#include <QtGui/qimagewriter.h>


ScalarField::ScalarField(const unsigned _nx, const unsigned _ny, const Box& _domain, 
	const double value) : nx(_nx), ny(_ny), domain(_domain)
{
	values.clear();
	values.resize(nx * ny, value);
}


Vector2 ScalarField::getBounds() const
{
	return Vector2(nx, ny);
}


void ScalarField::rescaleDomain()
{
	double min = values.at(0), max = values.at(0);
	for (unsigned i = 1; i < values.size(); i++)
	{
		if (values.at(i) < min)
			min = values.at(i);
		if (values.at(i) > max)
			max = values.at(i);
	}
	std::cout << "min " << min << " max " << max << std::endl;
	domain[0][2] = min;
	domain[1][2] = max;
}


Vector2 ScalarField::Gradient(const unsigned i, const unsigned j) const
{
	unsigned a = index(std::min(i + 1, nx - 1), j);
	unsigned b = index((i > 0 ? i - 1 : i), j);
	unsigned c = index(i, std::min(j + 1, ny - 1));
	unsigned d = index(i, (j > 0 ? j - 1 : i));

	double x = (values.at(a) - values.at(b)) * 0.5 * idx;
	double y = (values.at(c) - values.at(d)) * 0.5 * idy;

	return Vector2(x, y);
}

void ScalarField::exportPng(const QString& path) const
{
	unsigned i, j;
	const double zStep = (domain[1][2] - domain[0][2]) / 255;
	uchar color;
	QImage image(nx, ny, QImage::Format_Grayscale8);
	
	for (i = 0; i < nx; i++)
	{
		for (j = 0; j < ny; j++)
		{
			color = (values.at(index(i, j)) - domain[0][2]) / zStep;
			image.setPixelColor(i, j, QColor(color, color, color));
		}
	}

	QImageWriter writer(path);
	writer.write(image);
}
