#include "Engine.h"
#include "Curses/curses.h"
#include "Utils/Timer.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

bool Engine::m_stopping = false;

Engine::Engine(int gameWidth, int gameHeight) 
	: m_windowWidth(gameWidth), m_windowHeight(gameHeight) {
	
}

Engine::~Engine() {
	
}

void Engine::start() {
	// TODO: Add engine code, ie initializing systems

	initscr(); // Initialized Curses
	cbreak();
	keypad(stdscr, 1); // Enables funcion keys
	start_color(); // Enables colors
	noecho(); // Do not echo input
	curs_set(0); // Disable cursor

	resize_term(m_windowHeight, m_windowWidth);
	nodelay(stdscr, true); // Do not pause for input

	init();
	gameLoop();
}


void Engine::gameLoop() {

	Timer timer;

	float tickTimer = 0.0f;
	float updateTimer = 0.0f;
	float renderTimer = 0.0f;

	float tickTick = 1.0f;
	float updateTick = 1.0f / 30;
	float renderTick = 1.0f / 30;

	unsigned int updates = 0;
	unsigned int frames = 0;

	while (!m_stopping) {
		
		handleEvents();

		if (timer.Elapsed() - updateTimer > updateTick) {
			update(updateTick);

			updateTimer += updateTick;
			updates++;
		}

		if (timer.Elapsed() - renderTimer > renderTick) {
			clear();

			render();
			
			refresh();

			renderTimer += renderTick;
			frames++;
		}

		if (timer.Elapsed() - tickTimer > tickTick) {
			tick();

			m_framesPerSecond = frames;
			m_updatesPerSecond = updates;

			frames = 0;
			updates = 0;

			tickTimer += tickTick;
		}

		std::this_thread::sleep_for(16ms);

	}

}

void Engine::handleEvents() {
	



}