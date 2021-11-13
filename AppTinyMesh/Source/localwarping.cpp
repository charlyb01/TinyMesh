#include "localwarping.h"


double LocalWarping::smoothStep(double edge0, double edge1, double x)
{
    double t = Math::Clamp((x - edge0) / (edge1 - edge0), 0.0, 1.0);
    return t * t * (3.0 - 2.0 * t);
}
