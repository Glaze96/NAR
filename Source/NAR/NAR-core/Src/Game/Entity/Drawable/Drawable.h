#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <Game/Entity/Entity.h>
#include <Engine/Math/Vector2.h>

class Camera;

class Drawable : public Entity {
protected:
	Drawable();
	Drawable(char appearance, const Vector2i& startPosition = Vector2i());

public:
	virtual ~Drawable();

public: // Methods
	void draw(const Camera& camera);
	void move(const Vector2i& direction);
	
protected: // Fields
	char m_appearance;
	Vector2i m_position;
};