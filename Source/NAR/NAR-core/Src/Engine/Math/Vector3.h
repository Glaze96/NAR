#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include <string>


struct Vector3f {
	float x, y, z;

	Vector3f();
	Vector3f(const float& x, const float& y, const float& z);

	float Mag() const;
	Vector3f Normalized() const;
	std::string ToString() const;

	Vector3f operator+(const Vector3f& v) const;
	Vector3f operator-(const Vector3f& v) const;

	Vector3f operator-() const;

	Vector3f operator+(const float& f) const;
	Vector3f operator-(const float& f) const;
	Vector3f operator*(const float& f) const;
	Vector3f operator/(const float& f) const;

	void operator+=(const Vector3f& v);
	void operator-=(const Vector3f& v);
	void operator*=(const float& f);
	void operator/=(const float& f);

	bool operator==(const Vector3f& v) const;
};

