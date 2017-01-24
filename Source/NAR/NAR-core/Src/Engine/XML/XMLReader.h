#pragma once
#include "Game/Entity/Character/CharacterDesc.h"
#include <RapidXML/rapidxml.hpp>
#include <string>

class XMLReader {
public:
	XMLReader();

public: // Methods
	CharacterDesc* getCharacterDesc();


private: // Fields


};