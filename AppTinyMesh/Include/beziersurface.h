#ifndef __BEZIERSURFACE__
#define __BEZIERSURFACE__

#include <random>
#include <array>
#include <vector>

#include "bezier.h"

/**
* @class BezierSurface Include/beziersurface.h
* @brief Bezier 2D curve, or Bezier surface
*/
class BezierSurface : public Bezier
{
private:
	unsigned n;		///< Number of control points for first Bezier curve
	unsigned m;		///< Number of control points for second Bezier curve
	std::vector<std::vector<Vector>> ctrl;	///< Control points

public:
	BezierSurface(const unsigned, const unsigned);

	Vector P(const double, const double) const;

	void translate(const Vector&);
	//void rotate(const Matrix&); // Implement matrix class!
	
	Box getBox() const;
	Mesh getMesh(const unsigned, const unsigned) const;
};

#endif
