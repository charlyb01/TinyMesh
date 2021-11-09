#ifndef __BEZIER__
#define __BEZIER__

#include <array>
#include <random>

#include "evector.h"
#include "box.h"
#include "mesh.h"

/**
* @class Bezier Include/bezier.h
* @brief Bezier utils
*/
class Bezier
{
public:
	static Vector generateRandomPoint(std::default_random_engine);
	static Vector generateRandomPoint(const Vector&, std::default_random_engine);

	static double B(const double, const unsigned, const unsigned);

	virtual void translate(const Vector&) = 0;
	//virtual void rotate(const Matrix&) = 0; // Implement matrix class!

	virtual Box getBox() const = 0;
	virtual Mesh getMesh(const unsigned, const unsigned) const = 0;

private:
	static constexpr unsigned Cnp[13][13] =
	{ {1, 0,	0,	0,	 0,	  0,   0,   0,   0,   0,   0,  0,  0},
		{1, 1,	0,	0,	 0,	  0,   0,   0,   0,   0,   0,  0,  0},
		{1, 2,	1,	0,	 0,	  0,   0,   0,   0,   0,   0,  0,  0},
		{1, 3,	3,	1,	 0,	  0,   0,   0,   0,   0,   0,  0,  0},
		{1, 4,	6,	4,	 1,	  0,   0,   0,   0,   0,   0,  0,  0},
		{1, 5,	10, 10,  5,	  1,   0,   0,   0,   0,   0,  0,  0},
		{1, 6,	15, 20,  15,  6,   1,   0,   0,   0,   0,  0,  0},
		{1, 7,	21, 35,  35,  21,  7,   1,   0,   0,   0,  0,  0},
		{1, 8,	28, 56,  70,  56,  28,  8,   1,   0,   0,  0,  0},
		{1, 9,	36, 84,  126, 126, 84,  36,  9,   1,   0,  0,  0},
		{1, 10,	45, 120, 210, 252, 210, 120, 45,  10,  1,  0,  0},
		{1, 11,	55, 165, 330, 462, 462, 330, 165, 55,  11, 1,  0},
		{1, 12,	66, 220, 495, 792, 924, 792, 495, 220, 66, 12, 1},
	};
};

#endif
