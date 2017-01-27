#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/
#include <iostream>


class Entity {
public:
	Entity();

public: // Methods
	virtual void update(char input) = 0;


private: // Fields
	unsigned int m_id;
};
