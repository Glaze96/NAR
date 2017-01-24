#pragma once
#include <string>
#include "Game/Entity/Character/CharacterDesc.h"

class FileIO {
public:
	FileIO();

public:
	CharacterDesc* getCharacterDesc(const std::string& id);
	std::string getTextFromFile(const std::string& filePath);
};