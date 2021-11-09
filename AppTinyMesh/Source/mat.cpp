#include "mat.h"
#include "mathematics.h"

Mat4::Mat4(
    const double t00, const double t01, const double t02, const double t03,
    const double t10, const double t11, const double t12, const double t13,
    const double t20, const double t21, const double t22, const double t23,
    const double t30, const double t31, const double t32, const double t33)
{
    m[0][0] = t00; m[0][1] = t01; m[0][2] = t02; m[0][3] = t03;
    m[1][0] = t10; m[1][1] = t11; m[1][2] = t12; m[1][3] = t13;
    m[2][0] = t20; m[2][1] = t21; m[2][2] = t22; m[2][3] = t23;
    m[3][0] = t30; m[3][1] = t31; m[3][2] = t32; m[3][3] = t33;
}

Vector Mat4::operator() (const Vector& v) const
{
    double x = m[0][0] * v[0] + m[0][1] * v[1] + m[0][2] * v[2] + m[0][3];
    double y = m[1][0] * v[0] + m[1][1] * v[1] + m[1][2] * v[2] + m[1][3];
    double z = m[2][0] * v[0] + m[2][1] * v[1] + m[2][2] * v[2] + m[2][3];
    double w = m[3][0] * v[0] + m[3][1] * v[1] + m[3][2] * v[2] + m[3][3];

    assert(w != 0);
    if (w == 1.f)
        return Vector(x, y, z);
    else
        return Vector(x / w, y / w, z / w);
}

Mat4 Mat4::inverse() const
{
    Mat4 minv = *this;

    int indxc[4], indxr[4];
    int ipiv[4] = { 0, 0, 0, 0 };

    for (int i = 0; i < 4; i++) {
        int irow = -1, icol = -1;
        float big = 0.f;

        // Choose pivot
        for (int j = 0; j < 4; j++) {
            if (ipiv[j] != 1) {
                for (int k = 0; k < 4; k++) {
                    if (ipiv[k] == 0) {
                        if (fabsf(minv.m[j][k]) >= big) {
                            big = std::abs(minv.m[j][k]);
                            irow = j;
                            icol = k;
                        }
                    }
                    else if (ipiv[k] > 1)
                        printf("singular matrix in Transform::inverse()\n");
                }
            }
        }

        assert(irow >= 0 && irow < 4);
        assert(icol >= 0 && icol < 4);

        ++ipiv[icol];
        // Swap rows _irow_ and _icol_ for pivot
        if (irow != icol) {
            for (int k = 0; k < 4; ++k)
                std::swap(minv.m[irow][k], minv.m[icol][k]);
        }

        indxr[i] = irow;
        indxc[i] = icol;
        if (minv.m[icol][icol] == 0.)
            printf("singular matrix in Mat4::inverse()\n");

        // Set $m[icol][icol]$ to one by scaling row _icol_ appropriately
        float pivinv = 1.f / minv.m[icol][icol];
        minv.m[icol][icol] = 1.f;
        for (int j = 0; j < 4; j++)
            minv.m[icol][j] *= pivinv;

        // Subtract this row from others to zero out their columns
        for (int j = 0; j < 4; j++) {
            if (j != icol) {
                float save = minv.m[j][icol];
                minv.m[j][icol] = 0;
                for (int k = 0; k < 4; k++)
                    minv.m[j][k] -= minv.m[icol][k] * save;
            }
        }
    }

    // Swap columns to reflect permutation
    for (int j = 3; j >= 0; j--) {
        if (indxr[j] != indxc[j]) {
            for (int k = 0; k < 4; k++)
                std::swap(minv.m[k][indxr[j]], minv.m[k][indxc[j]]);
        }
    }

    return minv;
}


Mat4 Mat4::Translation(const Vector& v)
{
    return Mat4(
        1, 0, 0, v[0],
        0, 1, 0, v[1],
        0, 0, 1, v[2],
        0, 0, 0, 1);
}

Mat4 Mat4::RotationX(const double angle)
{
    double sin_t = sin(Math::DegreeToRadian(angle));
    double cos_t = cos(Math::DegreeToRadian(angle));

    return Mat4(
        1, 0, 0, 0,
        0, cos_t, -sin_t, 0,
        0, sin_t, cos_t, 0,
        0, 0, 0, 1);
}

Mat4 Mat4::RotationY(const double angle)
{
    double sin_t = sin(Math::DegreeToRadian(angle));
    double cos_t = cos(Math::DegreeToRadian(angle));

    return Mat4(
        cos_t, 0, sin_t, 0,
        0, 1, 0, 0,
        -sin_t, 0, cos_t, 0,
        0, 0, 0, 1);
}

Mat4 Mat4::RotationZ(const double angle)
{
    double cos_t = sin(Math::DegreeToRadian(angle));
    double sin_t = cos(Math::DegreeToRadian(angle));

    return Mat4(
        cos_t, -sin_t, 0, 0,
        sin_t, cos_t, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 1);
}

Mat4 Mat4::Rotation(const Vector& axis, const double angle)
{
    Vector a = Normalized(axis);
    double s = sin(Math::DegreeToRadian(angle));
    double c = cos(Math::DegreeToRadian(angle));

    return Mat4(
        a[0] * a[0] + (1 - a[0] * a[0]) * c,
        a[0] * a[1] * (1 - c) - a[2] * s,
        a[0] * a[2] * (1 - c) + a[1] * s,
        0,

        a[0] * a[1] * (1 - c) + a[2] * s,
        a[1] * a[1] + (1 - a[1] * a[1]) * c,
        a[1] * a[2] * (1 - c) - a[0] * s,
        0,

        a[0] * a[2] * (1 - c) - a[1] * s,
        a[1] * a[2] * (1 - c) + a[0] * s,
        a[2] * a[2] + (1 - a[2] * a[2]) * c,
        0,

        0, 0, 0, 1);
}
