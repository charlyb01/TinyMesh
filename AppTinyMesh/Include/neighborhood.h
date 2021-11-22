#ifndef __NEIGHBORHOOD__
#define __NEIGHBORHOOD__

#include <array>
#include <map>

#include "drainagetype.h"
//#include "heightfield.h"
#include "vector2.h"

class HeightField;


/**
* @class Height Field Include/heightfield.h
* @brief ...
*/
class Neighborhood
{
public:
	static const std::array<Vector2, 8> OFFSET;

	Neighborhood(const HeightField&, const unsigned, const unsigned, const unsigned, const DrainageType);

	Vector2 getOffset(const unsigned) const;
	unsigned sortedIndex(const unsigned) const;
	double quantityDh(const unsigned) const;

private:
	unsigned n;						///< Number of lower neighbors
	Vector2 offset[8];				///< Actual offsets (no offset if borderline)
	double dh_sum;					///< Sum of dh of k neighbors
	double dh[8];					///< Delta heights
	unsigned sorted_index_dh[8];	///< Delta heights sorted indexes
	double s[8];					///< Slopes
	double ns[8];					///< Normalized slopes

	DrainageType drainage_type;		///< Type of drainage
	unsigned K;						///< Number of steepest
};

#endif
