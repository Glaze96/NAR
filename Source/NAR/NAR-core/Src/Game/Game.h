#pragma once
#include "Engine/Engine.h"

class Game : public Engine {
public:
	Game(int gameWidth, int gameHeight);

protected: // Methods
	void init() override;
	void update(double deltaTime) override;
	void render() override;
	void tick() override;

private: // Fields
		

};