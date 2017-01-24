#include <iostream>
#include "Game/Game.h"
#include "Curses/curses.h"
#include "Engine/IO/FileIO.h"

int main() {

	//Game game(25, 80);
	//game.start();

	FileIO fileIO;

	fileIO.getCharacterDesc("Orc");


	system("pause");
	return 0;
}