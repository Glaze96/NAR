#include <iostream>
#include "Game/Game.h"
#include <Game/Entity/Entity.h>
#include <Game/Entity/Drawable/Character/Fighter/Fighter.h>

int main() {

	Game game(128, 72);
	game.start();

	system("pause");
	return 0;
}


//#include <string>
//#include <stdarg.h>
//
//std::string compileFormatString(std::string str, ...) {
//	
//	std::string newString = "";
//
//	va_list args;
//
//	va_start(args, str);
//	newString += str;
//	va_end(args);
//
//	return newString;
//}
//
//int main() {
//
//	std::cout << compileFormatString("I like the number %i", 3) << std::endl;
//	// ACTUAL OUTPUT: I like the number %i
//	// WANTED OUTPUT: I like the number 3
//
//	system("pause");
//
//	return 0;
//}
















