#include "Entity.h"

unsigned int Entity::m_idCounter = 0;

Entity::Entity() 
	: m_id(m_idCounter++) { }

Entity::~Entity() {
	


}