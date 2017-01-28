#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <Game/Entity/Drawable/Character/Character.h>
#include "FighterDesc.h"

class Fighter : public Character {
public:
	Fighter(FighterDesc& desc);

public: // Methods

private: // Fields
	unsigned int m_health;
	unsigned int m_energy;
	unsigned int m_experience;
	unsigned int m_defence;
	unsigned int m_dexterity;
	unsigned int m_constitution;


};
