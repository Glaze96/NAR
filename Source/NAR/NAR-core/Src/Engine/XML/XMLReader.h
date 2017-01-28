#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include <Game/Entity/Drawable/Character/Fighter/FighterDesc.h>
#include <RapidXML/rapidxml.hpp>

class XMLReader {
public:
	XMLReader();

public: // Methods
	FighterDesc* getCharacterDesc();


private: // Fields


};