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
	Drawable(char appearance, const Vector2i& startPosition = Vector2i());

public:
	virtual ~Drawable();

public: // Methods

	virtual void draw(const Camera& camera);
	
private: // Fields
	char m_appearance;
	Vector2i m_position;
};