#include "Game.h"
#include <iostream>
#include "Curses/curses.h"
#include <Engine/Drawing/RenderManager.h>

Game::Game(int gameWidth, int gameHeight) 
	: Engine(gameWidth, gameHeight), m_camera(Vector2i(128, 72)) {}

void Game::init() {
	// TODO: Initialize game systems


}

void Game::update(double deltaTime, int input) {

	if (input == 'w') {
		m_camera.move(Vector2f(0, -1));
	}
	else if (input == 'a') {
		m_camera.move(Vector2f(-1, 0));
	}
	else if (input == 's') {
		m_camera.move(Vector2f(0, 1));
	}
	else if (input == 'd') {
		m_camera.move(Vector2f(1, 0));
	}


}

void Game::draw() {

	RenderManager::Println(m_camera, Vector2i(0, 0), "FPS: %i", getFPS());
}

void Game::tick() {
	


}


