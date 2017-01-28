#include "Drawable.h"
#include <Engine/Rendering/RenderManager.h>

Drawable::Drawable(char appearance, Camera& camera, const Vector2i& position) 
	: m_appearance(appearance), m_position(position), m_camera(camera) {
	
}

Drawable::~Drawable() {
	
}

void Drawable::draw() {
	RenderManager::PrintChar(m_camera, m_position, m_appearance);
}