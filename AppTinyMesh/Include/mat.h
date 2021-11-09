#ifndef __MATRIX4__
#define __MATRIX4__

#include "evector.h"

class Mat4
{
private:
    double m[4][4];

public:
    Mat4(
        const double t00 = 1, const double t01 = 0, const double t02 = 0, const double t03 = 0,
        const double t10 = 0, const double t11 = 1, const double t12 = 0, const double t13 = 0,
        const double t20 = 0, const double t21 = 0, const double t22 = 1, const double t23 = 0,
        const double t30 = 0, const double t31 = 0, const double t32 = 0, const double t33 = 1);

    Vector operator() (const Vector&) const;
    Mat4 transpose() const;
    Mat4 inverse() const;

    static Mat4 Translation(const Vector&);
    static Mat4 RotationX(const double);
    static Mat4 RotationY(const double);
    static Mat4 RotationZ(const double);
    static Mat4 Rotation(const Vector&, const double);
};

#endif
