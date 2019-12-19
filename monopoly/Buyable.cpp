#include "Buyable.h"

Buyable::Buyable(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize)
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

void Buyable::mortgageProperty()
{
	int mortgageFunds = this->price / 2;
	this->owner.addToBank(mortgageFunds);
	this->isMortgaged = true;
}

void Buyable::buyProperty(Player newOwner)
{
	Player inEscrow = newOwner;
	if (inEscrow.getIsBankrupt() == true)
	{	}
	else
	{
		this->setOwner(newOwner);
		owner.subtractFromBank(price);
	}
}

void Buyable::liftMortgage()
{
	int interest = (int)price * .1;
	int liftMortgageAmt = (price / 2) + interest;
	owner.subtractFromBank(liftMortgageAmt);
}


