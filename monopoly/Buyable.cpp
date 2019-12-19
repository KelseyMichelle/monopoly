#include "Buyable.h"

Buyable::Buyable(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group)
	: Space(name, players, position) 
{
	this->price = price;
	this->isMortgaged = isMortgaged;
	this->rent = rent;
	this->owner = owner;
	this->group = group;

}

void Buyable::setPrice(int newPrice)
{
	this->price = newPrice;
}

void Buyable::setOwner(Player& newOwner)
{
	this->owner = newOwner;
}

void Buyable::setIsMortgaged(bool TF)
{
	this->isMortgaged = TF;
}

void Buyable::setAllGroup(bool TF)
{
	this->allGroup = TF;
}

std::string Buyable::getName()
{
	return name;
}

int Buyable::getPrice()
{
	return price;
}

int Buyable::getRent()
{
	return rent;
}

bool Buyable::getIsMortgaged()
{
	return isMortgaged;
}

Player Buyable::getPlayer()
{
	return owner;
}

int Buyable::getGroup()
{
	return group;
}

bool Buyable::setAllGroup()
{
	return allGroup;
}
