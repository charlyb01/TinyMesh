#ifndef  __LOCALTRANSLATION__
#define __LOCALTRANSLATION__

#include "localwarping.h"

/**
* @class Local Translation Include/localtranslation.h
* @brief Local translation warping of a mesh
*/
class LocalTranslation : public LocalWarping
{
public:
	Vector translation;						///< Translation

	LocalTranslation(const Vector& c, const double _r1, const double _r2, const Vector& t)
		: LocalWarping(c, _r1, _r2), translation(t) {}

	Vector warp(const Vector&) const;
	Mesh warpMesh(const Mesh&) const;
};

#endif
