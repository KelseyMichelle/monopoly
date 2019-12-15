#include "Player.h"
//spaghetti

using namespace std;

//create player object
Player::Player(std::string name, std::string icon, int position)
{
	this->name = name;
	this->icon = icon;
	this->position = position;
	defaultSpace = false;
}
//default constructor
Player::Player()
{
	this->name = "default";
	this->icon = "*";
	this->position = 0;
	this->defaultSpace = true;
}
//go through turn
void Player::takeTurn()
{
	//only take turn normally if not in jail
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

bool Player::isDefault()
{
	return this->defaultSpace;
}

string Player::getIcon()
{
	return this->icon;
}

int Player::getPos()
{
	return this->position;
}

void Player::setPos(int pos)
{
	this->position = pos;
}
