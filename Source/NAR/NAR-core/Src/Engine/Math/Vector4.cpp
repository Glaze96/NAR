#include "Vector4.h"

#include "constants.h"


namespace gengine {

	Vector4f::Vector4f()
		: x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}

	Vector4f::Vector4f(const float& x, const float& y, const float& z, const float& w)
		: x(x), y(y), z(z), w(w) {}

	Vector4f Vector4f::Normalized() const {
		Vector4f normalized(*this);
		normalized /= Mag();
		return normalized;
	}

	float Vector4f::Mag() const {
		return (float)sqrt(x * x + y * y + z * z + w * w);
	}

	std::string Vector4f::ToString() const {
		return "(" + std::to_string(x) + "; " + std::to_string(y) + "; " + std::to_string(z) + "; " + std::to_string(w) + ")";
	}

	Vector4f Vector4f::operator+(const Vector4f& v) const {
		return Vector4f(x + v.x, y + v.y, z + v.z, w + v.w);
	}

	Vector4f Vector4f::operator-(const Vector4f& v) const {
		return Vector4f(x - v.x, y - v.y, z - v.z, w + v.w);
	}

	Vector4f Vector4f::operator+(const float& f) const {
		return Vector4f(x + f, y + f, z + f, w + f);
	}

	Vector4f Vector4f::operator-(const float& f) const {
		return Vector4f(x - f, y - f, z - f, w - f);
	}

	Vector4f Vector4f::operator*(const float& f) const {
		return Vector4f(x * f, y * f, z * f, w * f);
	}

	Vector4f Vector4f::operator/(const float& f) const {
		return Vector4f(x / f, x / f, z / f, w / f);
	}

	void Vector4f::operator+=(const Vector4f& v) {
		x += v.x;
		y += v.y;
		z += v.z;
		w += v.w;
	}

	void Vector4f::operator-=(const Vector4f& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
		w -= v.w;
	}

	void Vector4f::operator*=(const float& f) {
		x *= f;
		y *= f;
		z *= f;
		w *= f;
	}

	void Vector4f::operator/=(const float& f) {
		x /= f;
		y /= f;
		z /= f;
		w /= f;
	}

	bool Vector4f::operator==(const Vector4f& v) const {
		if (x == v.x && y == v.y && z == v.z && w == v.w)
			return true;

		return false;
	}

}
