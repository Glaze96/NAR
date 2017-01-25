#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include <string>

struct Vector2f {
	float x, y;

	Vector2f();
	Vector2f(const float& x, const float& y);

	float Mag() const;
	Vector2f Normalized() const;
	std::string ToString() const;

	static Vector2f AngleToVector(const float& angle);

	Vector2f operator+(const Vector2f& v) const;
	Vector2f operator-(const Vector2f& v) const;

	Vector2f operator+(const float& f) const;
	Vector2f operator-(const float& f) const;
	Vector2f operator*(const float& f) const;
	Vector2f operator/(const float& f) const;

	void operator+=(const Vector2f& v);
	void operator-=(const Vector2f& v);
	void operator*=(const float& f);
	void operator/=(const float& f);

	bool operator==(const Vector2f& v) const;

};

struct Vector2i {
	int x, y;

	Vector2i();
	Vector2i(const int& x, const int& y);

	float Mag() const;
	Vector2f normalized() const;
	std::string toString() const;

	static Vector2f AngleToVector(const float& angle);

	Vector2i operator+(const Vector2i& v) const;
	Vector2i operator-(const Vector2i& v) const;

	Vector2i operator+(const int& f) const;
	Vector2i operator-(const int& f) const;
	Vector2i operator*(const int& f) const;
	Vector2i operator/(const float& f) const;

	void operator+=(const Vector2i& v);
	void operator-=(const Vector2i& v);
	void operator*=(const int& f);
	void operator/=(const float& f);

	bool operator==(const Vector2i& v) const;

};


