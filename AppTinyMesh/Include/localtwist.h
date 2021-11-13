#ifndef  __LOCALTWIST__
#define __LOCALTWIST__

#include "localwarping.h"

/**
* @class Local Twist Include/localtwist.h
* @brief Local twist warping of a mesh
*/
class LocalTwist : public LocalWarping
{
public:
	Vector direction;						///< Axis direction
	double period;							///< Length of a period

	LocalTwist(const Vector& c, const double _r1, const double _r2,
		const double p = 1., const Vector& d = Vector::Y)
		: LocalWarping(c, _r1, _r2), period(p), direction(d) {}

	Vector warp(const Vector&) const;
	Mesh warpMesh(const Mesh&) const;
};

#endif
