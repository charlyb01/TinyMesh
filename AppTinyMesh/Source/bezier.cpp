#include "bezier.h"

Vector Bezier::generateRandomPoint(const Vector& origin, std::default_random_engine engine)
{
	double tmpDelta, tmpValue;
	Vector tmpVector;
	std::uniform_real_distribution<double> distr;
	std::array<unsigned, 3> order{ 0, 1, 2 };
	std::random_shuffle(order.begin(), order.end());

	tmpVector = Vector(0.);
	tmpDelta = 1;
	distr = std::uniform_real_distribution<double>(0.0f, tmpDelta);
	tmpValue = distr(engine);
	tmpVector[order[0]] = std::sqrt(tmpValue);

	tmpDelta -= tmpValue;
	distr = std::uniform_real_distribution<double>(0.0f, tmpDelta);
	tmpValue = distr(engine);
	tmpVector[order[1]] = std::sqrt(tmpValue);

	tmpDelta -= tmpValue;
	tmpVector[order[2]] = std::sqrt(tmpDelta);

	return origin + tmpVector;
}

Vector Bezier::generateRandomPoint(std::default_random_engine engine)
{
	return generateRandomPoint(Vector(0.), engine);
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
	return Cnp[n][i] * pow(u, i) * pow(1 - u, n - i);
}
