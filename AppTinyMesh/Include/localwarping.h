#ifndef  __LOCALWARPING__
#define __LOCALWARPING__

#include "warping.h"

/**
* @class Local Warping Include/localwarping.h
* @brief Local warping operator warps around a center fully before first radius,
* not after second radius, and smooth in-between (fallof function).
*/
class LocalWarping : public Warping
{
protected:
	Vector center;
	double r1, r2;

	LocalWarping(const Vector& c, const double _r1, const double _r2) 
		: center(c), r1(_r1), r2(_r2) {}

public:
	static double smoothStep(double edge0, double edge1, double x);
};

#endif
