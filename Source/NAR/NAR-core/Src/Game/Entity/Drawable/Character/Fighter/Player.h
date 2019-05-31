#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include "Fighter.h"

class Player : public Fighter {
public:
	Player();
	Player(char apperance, const Vector2i& position);


public: // Methods

	void update(char input) override;

private: // Fields
};