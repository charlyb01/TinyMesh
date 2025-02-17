#include "bezier.h"


Vector Bezier::generateRegularRandomPoint(const Vector& origin, std::default_random_engine engine,
	const bool negative)
{
	double tmpDelta, tmpValue;
	Vector tmpVector;
	std::uniform_real_distribution<double> distr;
	std::array<unsigned, 3> order{ 0, 1, 2 };
	std::random_shuffle(order.begin(), order.end());

	tmpVector = Vector(0.);
	tmpDelta = 1.;
	distr = std::uniform_real_distribution<double>(-tmpDelta, tmpDelta);
	tmpValue = distr(engine);
	if (tmpValue < 0.)
	{
		if (negative)
			tmpVector[order[0]] = -std::sqrt(-tmpValue);
		else
			tmpVector[order[0]] = std::sqrt(-tmpValue);
	}
	else
		tmpVector[order[0]] = std::sqrt(tmpValue);

	tmpDelta -= std::abs(tmpValue);
	distr = std::uniform_real_distribution<double>(-tmpDelta, tmpDelta);
	tmpValue = distr(engine);
	if (tmpValue < 0.)
	{
		if (negative)
			tmpVector[order[1]] = -std::sqrt(-tmpValue);
		else
			tmpVector[order[1]] = std::sqrt(-tmpValue);
	}
	else
		tmpVector[order[1]] = std::sqrt(tmpValue);

	tmpDelta -= std::abs(tmpValue);
	if (tmpValue < 0.)
	{
		if (negative)
			tmpVector[order[2]] = -std::sqrt(-tmpValue);
		else
			tmpVector[order[2]] = std::sqrt(-tmpValue);
	}
	else
		tmpVector[order[2]] = std::sqrt(tmpValue);

	return origin + tmpVector;
}


/**
* @brief Evaluate n-degree Bernstein polynom at i for u
*
* @param u : coordinate on the curve
* @param i : ???
* @param n : degree of the polynom
*/
double Bezier::B(const double u, const unsigned i, const unsigned n)
{
	const unsigned _i = n - i;
	const double _u = 1.0 - u;
	unsigned j;
	double a = 1.0, b = 1.0;

	for (j = 0; j < i; j++)
		a *= u;
	for (j = 0; j < _i; j++)
		b *= _u;

	return Cnp[n][i] * a * b;
}
