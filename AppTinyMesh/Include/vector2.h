#ifndef __VECTOR2__
#define __VECTOR2__


/**
* @class Vector 2D Include/vector2.h
* @brief Vector 2D tiny class
*/
class Vector2
{
protected:
	double c[2]; //!< Components.

public:
	//! Empty 
	Vector2() {}

	explicit Vector2(double);
	explicit Vector2(double, double);

	// Access members
	double& operator[] (int);
	double operator[] (int) const;

	// Norm
	friend double Norm(const Vector2&);
	friend double SquaredNorm(const Vector2&);

	// Unary operators
	Vector2 operator- () const;

	// Binary operators
	friend Vector2 operator+ (const Vector2&, const Vector2&);
	friend Vector2 operator- (const Vector2&, const Vector2&);

	friend Vector2 operator* (const Vector2&, double);
	friend Vector2 operator* (double, const Vector2&);
	friend Vector2 operator/ (const Vector2&, double);
};


/*!
\brief Create a vector with the same coordinates.
\param a Real.
*/
inline Vector2::Vector2(double a)
{
	c[0] = c[1] = a;
}

/*!
\brief Create a vector with argument coordinates.
\param a,b,c Coordinates.
*/
inline Vector2::Vector2(double a, double b)
{
	c[0] = a;
	c[1] = b;
}

//! Gets the i-th coordinate of vector.
inline double& Vector2::operator[] (int i)
{
	return c[i];
}

//! Returns the i-th coordinate of vector.
inline double Vector2::operator[] (int i) const
{
	return c[i];
}

/*!
\brief Compute the squared Euclidean norm of a vector2.
\param u %Vector2.
\sa Norm
*/
inline double SquaredNorm(const Vector2& u)
{
	return (u[0] * u[0] + u[1] * u[1]);
}

/*!
\brief Compute the Euclidean norm of a vector2.

This function involves a square root computation, it is in general more efficient to rely on
the squared norm of a vector instead.
\param u %Vector2.
\sa SquaredNorm
*/
inline double Norm(const Vector2& u)
{
	return sqrt(SquaredNorm(u));
}

// Unary operators

//! Overloaded.
inline Vector2 Vector2::operator- () const
{
	return Vector2(-c[0], -c[1]);
}

// Binary operators

//! Adds up two vectors.
inline Vector2 operator+ (const Vector2& u, const Vector2& v)
{
	return Vector2(u.c[0] + v.c[0], u.c[1] + v.c[1]);
}

//! Difference between two vectors.
inline Vector2 operator- (const Vector2& u, const Vector2& v)
{
	return Vector2(u.c[0] - v.c[0], u.c[1] - v.c[1]);
}

//! Right multiply by a scalar.
inline Vector2 operator* (const Vector2& u, double a)
{
	return Vector2(u.c[0] * a, u.c[1] * a);
}

//! Left multiply by a scalar.
inline Vector2 operator* (double a, const Vector2& v)
{
	return v * a;
}

//! Left division by a scalar
inline Vector2 operator/ (const Vector2& u, double a)
{
	return Vector2(u.c[0] / a, u.c[1] / a);
}

#endif
