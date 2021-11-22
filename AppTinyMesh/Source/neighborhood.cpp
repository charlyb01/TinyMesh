#include "neighborhood.h"
#include "heightfield.h"

const std::array<Vector2, 8> Neighborhood::OFFSET =
{
	Vector2(1, 0),
	Vector2(1, 1),
	Vector2(0, 1),
	Vector2(-1, 1),
	Vector2(-1, 0),
	Vector2(-1, -1),
	Vector2(0, -1),
	Vector2(1, -1)
};


Neighborhood::Neighborhood(const HeightField& hf, const unsigned i, const unsigned j,
	const unsigned _K, const DrainageType type)
	: n(0), dh_sum(0), K(_K), drainage_type(type)
{
	std::map<double, int> dh_map;
	Vector2 p = Vector2(i, j);
	const double pZ = hf[hf.index(p[0], p[1])];
	unsigned k;
	Vector2 hf_bounds = hf.getBounds();

	for (k = 0; k < 8; k++)
	{
		Vector2 q = p + OFFSET[k];

		if (q[0] < 0 || q[1] < 0 || q[0] >= hf_bounds[0] || q[1] >= hf_bounds[1])
		{
			dh[k] = 0;
			offset[k] = Vector2();
		}
		else
		{
			offset[k] = OFFSET[k];

			dh[k] = hf[hf.index(q[0], q[1])] - pZ;
			dh_map.insert(std::pair<double, int>(dh[k], k));
			if (dh[k] < 0)
				n++;

			//s[k] = hf.Slope(q[0], q[1]);
			//ns[k] = hf.NormalizedSlope(q[0], q[1]);
		}
	}

	if (drainage_type == DrainageType::HALF_STEEPEST)
		K = n / 2;

	k = 0;
	while (!dh_map.empty())
	{
		sorted_index_dh[k] = dh_map.begin()->second;
		dh_map.erase(dh_map.begin());
		
		if (k < K && k < n)
			dh_sum += dh[sorted_index_dh[k]];

		k++;
	}
}

Vector2 Neighborhood::getOffset(const unsigned k) const
{
	return offset[k];
}

unsigned Neighborhood::sortedIndex(const unsigned k) const
{
	for (unsigned pos = 0; pos < 8; pos++)
	{
		if (sorted_index_dh[pos] == k)
			return pos;
	}
}

double Neighborhood::quantityDh(const unsigned k) const
{
	unsigned sk = sortedIndex(k);
	return (sk < K && sk < n)
		? dh[k] / dh_sum
		: 0.;
}
