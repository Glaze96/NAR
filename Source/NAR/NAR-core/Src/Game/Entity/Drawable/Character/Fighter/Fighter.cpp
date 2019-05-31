#include "Fighter.h"

Fighter::Fighter()
{
}

Fighter::Fighter(char appearance, const Vector2i& startPosition = Vector2i())
{
	m_appearance = appearance;
	m_position = startPosition;
}

Fighter::Fighter(char appearance, const Vector2i& startPosition, FighterDesc& desc)
{
	m_appearance = appearance;
	m_position = startPosition;


}