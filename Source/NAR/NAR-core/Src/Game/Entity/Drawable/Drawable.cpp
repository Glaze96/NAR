#include "Drawable.h"
#include <Engine/Rendering/RenderManager.h>

Drawable::Drawable()
{
	m_appearance = '¤';
}

Drawable::Drawable(char appearance, const Vector2i& startPosition)
	: m_appearance(appearance), m_position(startPosition)
{

}

Drawable::~Drawable()
{

}

void Drawable::draw(const Camera& camera)
{
	RenderManager::PrintChar(camera, m_position, m_appearance);
}

void Drawable::move(const Vector2i & direction)
{
	m_position += direction;
}
