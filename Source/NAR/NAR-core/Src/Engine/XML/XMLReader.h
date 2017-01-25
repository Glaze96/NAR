#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

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