#include "Vector3.h"

#include "constants.h"


namespace gengine {

	Vector3f::Vector3f()
		: x(0.0f), y(0.0f), z(0.0f) {}

	Vector3f::Vector3f(const float& x, const float& y, const float& z)
		: x(x), y(y), z(z) {}

	Vector3f Vector3f::Normalized() const {
		Vector3f normalized(*this);
		normalized /= Mag();
		return normalized;
	}

	float Vector3f::Mag() const {
		return (float)sqrt(x * x + y * y + z * z);
	}

	std::string Vector3f::ToString() const {
		return "(" + std::to_string(x) + "; " + std::to_string(y) + "; " + std::to_string(z) + ")";
	}

	Vector3f Vector3f::operator+(const Vector3f& v) const {
		return Vector3f(x + v.x, y + v.y, z + v.z);
	}

	Vector3f Vector3f::operator-(const Vector3f& v) const {
		return Vector3f(x - v.x, y - v.y, z - v.z);
	}

	Vector3f Vector3f::operator-() const {
		return Vector3f(-x, -y, -z);
	}

	Vector3f Vector3f::operator+(const float& f) const {
		return Vector3f(x + f, y + f, z + f);
	}

	Vector3f Vector3f::operator-(const float& f) const {
		return Vector3f(x - f, y - f, z - f);
	}

	Vector3f Vector3f::operator*(const float& f) const {
		return Vector3f(x * f, y * f, z * f);
	}

	Vector3f Vector3f::operator/(const float& f) const {
		return Vector3f(x / f, x / f, z / f);
	}

	void Vector3f::operator+=(const Vector3f& v) {
		x += v.x;
		y += v.y;
		z += v.z;
	}

	void Vector3f::operator-=(const Vector3f& v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
	}

	void Vector3f::operator*=(const float& f) {
		x *= f;
		y *= f;
		z *= f;
	}

	void Vector3f::operator/=(const float& f) {
		x /= f;
		y /= f;
		z /= f;
	}

	bool Vector3f::operator==(const Vector3f& v) const {
		if (x == v.x && y == v.y && z == v.z)
			return true;

		return false;
	}

}
