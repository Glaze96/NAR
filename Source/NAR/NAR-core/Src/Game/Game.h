#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include "Engine/Engine.h"
#include <Engine/Drawing/Camera.h>

class Game : public Engine {
public:
	Game(int gameWidth, int gameHeight);

protected: // Methods
	void init() override;
	void update(double deltaTime, int input) override;
	void draw() override;
	void tick() override;

private: // Fields
	Camera m_camera;

};