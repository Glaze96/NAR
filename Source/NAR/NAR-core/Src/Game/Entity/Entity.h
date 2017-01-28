#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

class Entity {
protected:
	Entity();
	virtual ~Entity();

public:

	// Methods
	virtual void update(char input) { }

private: // Fields
	unsigned int m_id;
	static unsigned int m_idCounter;
};
