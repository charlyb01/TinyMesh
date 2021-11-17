#ifndef __HEIGHTFIELD__
#define __HEIGHTFIELD__

#include "scalarfield.h"
#include "mesh.h"

/**
* @class Height Field Include/heightfield.h
* @brief ...
*/
class HeightField : public ScalarField
{
private:
	

public:
	HeightField(const QString&, const Box&);

	Mesh getMesh() const;

	Vector Normal(const unsigned, const unsigned) const;
	double Slope(const unsigned, const unsigned) const;
	
	//ScalarField Normals() const;
	ScalarField Slopes() const;
};

#endif
