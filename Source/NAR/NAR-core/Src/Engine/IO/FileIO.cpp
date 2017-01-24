#include "FileIO.h"
#include <iostream>
#include <fstream>

FileIO::FileIO() {
	
}

CharacterDesc* FileIO::getCharacterDesc(const std::string& name) {

	unsigned int enemyPosition;

	std::string text = getTextFromFile("Assets/Enemies.txt");

	enemyPosition = text.find(name);

	if (enemyPosition == std::string::npos) {
		std::cout << "Could not find character with name: \"" << name << "\"" << std::endl;;
		return nullptr;
	}

	unsigned int maxHealthPosition = text.find("maxHealth: ", enemyPosition);
	unsigned int newLinePosition = text.find("\n", maxHealthPosition);
	std::string maxHealth = text.substr(maxHealthPosition + 11, newLinePosition - (maxHealthPosition + 11));

	unsigned int maxManaPosition = text.find("maxMana: ", enemyPosition);
	newLinePosition = text.find("\n", maxManaPosition);
	std::string maxMana = text.substr(maxManaPosition + 9, newLinePosition - (maxManaPosition + 9));

	CharacterDesc* newCharacterDesc = new CharacterDesc();
	newCharacterDesc->name = name;
	newCharacterDesc->maxHealth = stoi(maxHealth);
	newCharacterDesc->maxMana = stoi(maxMana);


	std::cout << "Name: " << newCharacterDesc->name << std::endl;
	std::cout << "Health: " << newCharacterDesc->maxHealth << std::endl;
	std::cout << "Mana: " << newCharacterDesc->maxMana << std::endl;

	return newCharacterDesc;

}


std::string FileIO::getTextFromFile(const std::string& filePath) {
	std::ifstream file;
	std::string line;
	std::string lines;

	file.open(filePath);

	if (file.is_open()) {

		while (getline(file, line)) {
			lines += line + '\n';
		}

		file.close();
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}

	//std::cout << lines << std::endl;

	return lines;
}