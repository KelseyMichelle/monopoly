#include "Player.h"
//spaghetti

using namespace std;

void Player::takeTurn()
{
	if (!inJail)
	{

	}
	else
	{
		tryEscapeJail();
	}
}

void Player::putInJail()
{
}

bool Player::tryEscapeJail()
{
	return false;
}

int Player::getPosition()
{
	return this->position;
}