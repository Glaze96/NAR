#pragma once
#include <string>

struct Vector4f {
	float x, y, z, w;

	Vector4f();
	Vector4f(const float& x, const float& y, const float& z, const float& w);

	float Mag() const;
	Vector4f Normalized() const;
	std::string ToString() const;

	Vector4f operator+(const Vector4f& v) const;
	Vector4f operator-(const Vector4f& v) const;

	Vector4f operator+(const float& f) const;
	Vector4f operator-(const float& f) const;
	Vector4f operator*(const float& f) const;
	Vector4f operator/(const float& f) const;

	void operator+=(const Vector4f& v);
	void operator-=(const Vector4f& v);
	void operator*=(const float& f);
	void operator/=(const float& f);

	bool operator==(const Vector4f& v) const;
};

