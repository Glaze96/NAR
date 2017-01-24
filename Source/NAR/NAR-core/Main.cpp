#include <iostream>
#include "Game/Game.h"
#include "Curses/curses.h"

int main() {

	Game game(25, 80);
	game.start();


	system("pause");
	return 0;
}