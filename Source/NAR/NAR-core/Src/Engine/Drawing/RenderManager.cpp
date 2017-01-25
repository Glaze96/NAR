#include "RenderManager.h"
#include "Curses/curses.h"
#include <iostream>

int RenderManager::m_screenWidth;
int RenderManager::m_screenHeight;

void RenderManager::Init() {
	getmaxyx(stdscr, m_screenHeight, m_screenWidth);
}

void RenderManager::Println(const Vector2i& screenPosition, std::string str, ...) {
	if (OutOfBounds(screenPosition.x, screenPosition.y)) {
		return;
	}

	move(screenPosition.y, screenPosition.x);

	va_list args;

	va_start(args, str);
	vwprintw(stdscr, str.c_str(), args);
	va_end(args);
}

void RenderManager::Println(const Camera& camera, const Vector2i& worldPosition, std::string str, ...) {

	int screenXPos = worldPosition.x - camera.getPosition().x;
	int screenYPos = worldPosition.y - camera.getPosition().y;

	if (OutOfBounds(screenXPos, screenYPos)) {
		return;
	}

	move(screenYPos, screenXPos);

	va_list args;

	va_start(args, str);
	vwprintw(stdscr, str.c_str(), args);
	va_end(args);
}

void RenderManager::PrintChar(const Vector2i& screenPosition, char c) {
	if (OutOfBounds(screenPosition.x, screenPosition.y)) {
		return;
	}

	mvaddch(screenPosition.y, screenPosition.x, c);
}

void RenderManager::PrintChar(const Camera& camera, const Vector2i& worldPosition, char c) {

	int screenYPos = worldPosition.y - camera.getPosition().y;
	int screenXPos = worldPosition.x - camera.getPosition().x;

	if (OutOfBounds(screenXPos, screenYPos)) {
		return;
	}

	mvaddch(screenYPos, screenXPos, c);
}

bool RenderManager::OutOfBounds(int x, int y) {
	return (y < 0 || x < 0 || y >= m_screenHeight || x >= m_screenWidth);
}