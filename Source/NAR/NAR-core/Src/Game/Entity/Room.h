#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include "Drawable.h"
#include <Engine/Math/Vector2.h>

class Room : public Drawable {
public:
	Room(const Vector2i& mPosition, const Vector2i& mSize, char mWallGraphic);

public: // Methods
	Vector2i getBottomRight() const { return Vector2i(m_position.x + m_size.x, m_position.y + m_size.y); }

	void draw() override;

private: // Fields
	Vector2i m_position;
	Vector2i m_size;
};