#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <vector>
#include <Engine/Rendering/Camera.h>
#include <Game/Entity/Drawable/Drawable.h>
#include "Window.h"

class World : public Window{
public:
	World(const Camera& camera);
	~World();

public:
	void draw() override;

private:
	std::vector<Drawable> m_drawables;

};


