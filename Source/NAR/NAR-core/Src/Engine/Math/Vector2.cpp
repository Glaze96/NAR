#include "Vector2.h"

#include "constants.h"



Vector2f::Vector2f()
	: x(0.0f), y(0.0f) { }

Vector2f::Vector2f(const float& x, const float& y)
	: x(x), y(y) { }

Vector2f Vector2f::Normalized() const {
	Vector2f normalized(*this);
	normalized /= Mag();
	return normalized;
}

float Vector2f::Mag() const {
	return (float)sqrt(x * x + y * y);
}

std::string Vector2f::ToString() const {
	return "(" + std::to_string(x) + "; " + std::to_string(y) + ")";
}

Vector2f Vector2f::AngleToVector(const float& angle) {
	float radians = angle * TO_RADIANS;
	Vector2f vector(cos(radians), sin(radians));
	return vector;
}

Vector2f Vector2f::operator+(const Vector2f& v) const {
	return Vector2f(x + v.x, y + v.y);
}

Vector2f Vector2f::operator-(const Vector2f& v) const {
	return Vector2f(x - v.x, y - v.y);
}

Vector2f Vector2f::operator+(const float& f) const {
	return Vector2f(x + f, y + f);
}

Vector2f Vector2f::operator-(const float& f) const {
	return Vector2f(x - f, y - f);
}

Vector2f Vector2f::operator*(const float& f) const {
	return Vector2f(x * f, y * f);
}

Vector2f Vector2f::operator/(const float& f) const {
	return Vector2f(x / f, x / f);
}

void Vector2f::operator+=(const Vector2f& v) {
	x += v.x;
	y += v.y;
}

void Vector2f::operator-=(const Vector2f& v) {
	x -= v.x;
	y -= v.y;
}

void Vector2f::operator*=(const float& f) {
	x *= f;
	y *= f;
}

void Vector2f::operator/=(const float& f) {
	x /= f;
	y /= f;
}

bool Vector2f::operator==(const Vector2f& v) const {
	if (x == v.x && y == v.y)
		return true;

	return false;
}

Vector2i::Vector2i()
	: x(0.0f), y(0.0f) { }

Vector2i::Vector2i(const int& x, const int& y)
	: x(x), y(y) { }

Vector2f Vector2i::normalized() const {
	Vector2f normalized(x, y);
	normalized /= Mag();
	return normalized;
}

float Vector2i::Mag() const {
	return sqrt(x * x + y * y);
}

std::string Vector2i::toString() const {
	return "(" + std::to_string(x) + "; " + std::to_string(y) + ")";
}

Vector2f Vector2i::AngleToVector(const float& angle) {
	int radians = angle * TO_RADIANS;
	Vector2f vector(cos(radians), sin(radians));
	return vector;
}

Vector2i Vector2i::operator+(const Vector2i& v) const {
	return Vector2i(x + v.x, y + v.y);
}

Vector2i Vector2i::operator-(const Vector2i& v) const {
	return Vector2i(x - v.x, y - v.y);
}

Vector2i Vector2i::operator+(const int& f) const {
	return Vector2i(x + f, y + f);
}

Vector2i Vector2i::operator-(const int& f) const {
	return Vector2i(x - f, y - f);
}

Vector2i Vector2i::operator*(const int& f) const {
	return Vector2i(x * f, y * f);
}

Vector2i Vector2i::operator/(const float& f) const {
	return Vector2i(x / f, x / f);
}

void Vector2i::operator+=(const Vector2i& v) {
	x += v.x;
	y += v.y;
}

void Vector2i::operator-=(const Vector2i& v) {
	x -= v.x;
	y -= v.y;
}

void Vector2i::operator*=(const int& f) {
	x *= f;
	y *= f;
}

void Vector2i::operator/=(const float& f) {
	x /= f;
	y /= f;
}

bool Vector2i::operator==(const Vector2i& v) const {
	if (x == v.x && y == v.y)
		return true;

	return false;
}

