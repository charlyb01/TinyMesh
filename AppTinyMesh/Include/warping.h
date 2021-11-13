#ifndef  __WARPING__
#define __WARPING__

#include "evector.h"
#include "mesh.h"

/**
* @class Warping Include/warping.h
* @brief Warping operator abstract class
*/
class Warping
{
public:
	virtual Vector warp(const Vector&) const = 0;
	virtual Mesh warpMesh(const Mesh&) const = 0;
};

#endif
