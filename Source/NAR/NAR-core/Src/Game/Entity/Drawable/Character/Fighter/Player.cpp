#include "Player.h"

Player::Player()
{
}

Player::Player(char appearance, const Vector2i & position)
{
	m_appearance = appearance;
	m_position = position;
}

void Player::update(char input) {
	
	if (input == 'w')
		move(Vector2i(0, -1));
	if (input == 'a')
		move(Vector2i(-1, 0));
	if (input == 's')
		move(Vector2i(0, 1));
	if (input == 'd')
		move(Vector2i(1, 0));
}

