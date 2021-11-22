#ifndef __HEIGHTFIELD__
#define __HEIGHTFIELD__

#include "scalarfield.h"
#include "drainagetype.h"
#include "neighborhood.h"
#include "mesh.h"


/**
* @class Height Field Include/heightfield.h
* @brief ...
*/
class HeightField : public ScalarField
{
private:
	std::vector<Vector> normals;

public:
	HeightField(const QString&, const Box&);

	Mesh getMesh() const;

	Vector Normal(const unsigned, const unsigned) const;
	double Slope(const unsigned, const unsigned) const;
	
	void evaluateNormals();
	ScalarField Slopes() const;
	ScalarField DrainageArea(const unsigned K = 1, const DrainageType type = DrainageType::K_STEEPEST) const;
};

#endif
