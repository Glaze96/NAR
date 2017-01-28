#include "World.h"

World::World(const Camera& camera) 
	: Window(camera) {
		
}

World::~World() {
	
}

void World::draw() {
	
	for (auto drawable : m_drawables) {
		drawable.draw(m_camera);
	}

}