#include <iostream>
#include "Game/Game.h"
#include "Curses/curses.h"
#include "Engine/IO/FileIO.h"

int main() {

	Game game(128, 72);
	game.start();
	
	system("pause");
	return 0;
}