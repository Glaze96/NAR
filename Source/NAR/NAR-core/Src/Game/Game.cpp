#include "Game.h"
#include <iostream>
#include "Curses/curses.h"
#include <Engine/Rendering/RenderManager.h>

Game::Game(int gameWidth, int gameHeight)
	: Engine(gameWidth, gameHeight), m_camera(Vector2i(128, 72))
{
}

void Game::init()
{
	// TODO: Initialize game systems
	m_player = new Player('P', Vector2i(5, 5));
}

void Game::update(double deltaTime, int input)
{
	m_player->update(input);
}

void Game::draw()
{
	RenderManager::Println(m_camera, Vector2i(0, 0), "FPS: %i", getFPS());
	m_player->draw(m_camera);
}

void Game::tick()
{



}


