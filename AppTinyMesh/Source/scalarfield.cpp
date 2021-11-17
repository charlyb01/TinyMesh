#include "scalarfield.h"


Vector2 ScalarField::Gradient(const unsigned i, const unsigned j) const
{
	unsigned a = index(std::min(i + 1, nx - 1), j);
	unsigned b = index(std::max(i - 1, 0u), j);
	unsigned c = index(i, std::min(j + 1, ny - 1));
	unsigned d = index(i, std::max(j - 1, 0u));

	double x = (values.at(a) - values.at(b)) * 0.5 * idx;
	double y = (values.at(c) - values.at(d)) * 0.5 * idy;

	return Vector2(x, y);
}
