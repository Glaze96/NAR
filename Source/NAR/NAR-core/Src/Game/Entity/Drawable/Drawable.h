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
#include <Engine/Rendering/Camera.h>

class Drawable : public Entity {
protected:
	Drawable(char appearance, Camera& camera, const Vector2i& position = Vector2i());
	virtual ~Drawable();

public: // Methods
	virtual void draw();
	
private: // Fields
	Camera& m_camera;
	char m_appearance;
	Vector2i m_position;
};