#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <string>
#include <Game/Entity/Drawable/Character/Fighter/FighterDesc.h>

class FileIO {
public:
	FileIO();

public:
	FighterDesc* getCharacterDesc(const std::string& id);
	std::string getTextFromFile(const std::string& filePath);
};