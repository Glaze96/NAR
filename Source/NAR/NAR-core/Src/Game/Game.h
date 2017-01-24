#pragma once
#include "Engine/Engine.h"

class Game : public Engine {
public:
	Game(int gameWidth, int gameHeight);

protected:
	void init() override;
	void update(double deltaTime) override;
	void render() override;
	void tick() override;

private:
	
};