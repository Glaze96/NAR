#include "Game.h"
#include <iostream>
#include "Curses/curses.h"

Game::Game(int gameWidth, int gameHeight) 
	: Engine(gameWidth, gameHeight){}

void Game::init() {
	// TODO: Initialize game systems



}


void Game::update(double deltaTime) {
	


}

void Game::render() {

	printw("FPS: %i", getFPS());
	printw("UPS: %i", getUPS());

}

void Game::tick() {
	


}


