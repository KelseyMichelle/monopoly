#include "Card.h"


Card::Card(int cardID, std::string description, int type, int x)
{
	this->cardID = cardID;
	this->description = description;
	this->type = type;
	this->x = x;
}

Card::Card()
{
	cardID = 0;
	description = "Unstantiated Card";
}

int Card::getCardID()
{
	return cardID;
}

std::string Card::getDescription()
{
	return description;
}

void Card::addType(Player curPlayer)
{
	Player citizen = curPlayer;
	citizen.addToBank(x);
}

void Card::subtractType(Player curPlayer)
{
	Player citizen = curPlayer;
	citizen.subtractFromBank(x);
}

void Card::moveType(Player curPlayer)
{
	Player citizen = curPlayer;
	citizen.setPos(x);
}
