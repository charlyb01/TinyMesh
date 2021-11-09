#ifndef  __REVOLUTION__
#define __REVOLUTION__

#include "bezier.h"

/**
* @class Revolution Include/revolution.h
* @brief Bezier surface revolution
*/
class Revolution : public Bezier
{
private:
	unsigned n;								///< Number of control points for Bezier curve
	std::vector<Vector> ctrl;				///< Control points
	Vector origin;							///< Axis origin
	Vector direction;						///< Axis direction

public:
	Revolution(const unsigned, const Vector&, const Vector&);

	Vector P(const double) const;

	void setOrigin(const Vector& o) { origin = o; }
	void setDirection(const Vector& d) { direction = d; }
	
	void translate(const Vector&);
	void rotate(const Mat4&, const Vector&);

	Box getBox() const;
	Mesh getMesh(const unsigned, const unsigned) const;
};

#endif
