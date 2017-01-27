#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <Game/Entity/Entity.h>

class Drawable : public Entity {
protected:
	Drawable() { }

public: // Methods
	virtual void draw() = 0;
	
private: // Fields

};