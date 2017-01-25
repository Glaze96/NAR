#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include <Engine/Math/Vector2.h>


class Camera {
public:
	Camera(const Vector2i& size, const Vector2f& position = Vector2f(0, 0));

public:
	const Vector2f& getPosition() const { return m_position; }
	void setPosition(const Vector2f& value) { m_position = value; }

	void move(const Vector2f& direction);

private:
	Vector2f m_position;
	const Vector2i m_size;

};

