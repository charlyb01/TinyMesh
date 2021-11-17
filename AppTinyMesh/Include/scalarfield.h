#ifndef __SCALARFIELD__
#define __SCALARFIELD__

#include <vector>

#include "evector.h"
#include "vector2.h"
#include "box.h"
#include "mesh.h"

/**
* @class Scalar Field Include/scalarfield.h
* @brief Describes a scalar values field, with a specified scale and definition domain.
*/
class ScalarField
{
protected:
	std::vector<double> values;		///< 2D value field
	Box domain;						///< Domain of definition
	unsigned nx;					///< Serialization in X
	unsigned ny;					///< Serialization in Y
	double dx;						///< Delta X
	double dy;						///< Delta Y
	double idx;						///< Inverse of delta X
	double idy;						///< Inverse of delta Y

public:
	ScalarField(const Box& _domain) : domain(_domain) {}

	// Access members
	double& operator[] (const unsigned);
	double operator[] (const unsigned) const;

	unsigned index(const unsigned, const unsigned) const;
	Vector2 Gradient(const unsigned, const unsigned) const;

	void exportPng(const QString& path = "Data/result.png") const;
};

/*!
\brief Return a 1d index from 2d coordinates.
*/
inline unsigned ScalarField::index(const unsigned i, const unsigned j) const
{
	return ny * i + j;
}

//! Gets the i-th coordinate of scalar field values.
inline double& ScalarField::operator[] (const unsigned id)
{
	return values.at(id);
}

//! Returns the i-th coordinate of scalar field values.
inline double ScalarField::operator[] (const unsigned id) const
{
	return values.at(id);
}

#endif
