#ifndef  __TWIST__
#define __TWIST__

#include "warping.h"

/**
* @class Twist Include/twist.h
* @brief Twist warping of a mesh
*/
class Twist
{
private:
	Vector origin;							///< Axis origin
	Vector direction;						///< Axis direction
	double period;							///< Length of a period

public:
	Twist(const double p = 1., const Vector& o = Vector(0.), const Vector& d = Vector::Y) 
		: period(p), origin(o), direction(d) {}

	Vector warp(const Vector&) const;
	Mesh warpMesh(const Mesh&) const;
};

#endif
