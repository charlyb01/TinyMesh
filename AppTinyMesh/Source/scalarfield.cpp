#include "scalarfield.h"
#include <QtGui/qimage.h>
#include <QtGui/qimagewriter.h>


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
