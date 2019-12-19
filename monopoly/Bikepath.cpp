#include "Bikepath.h"

Bikepath::Bikepath(std::string name, std::array<Player, 6> &players, int position, int price, bool isMortgaged, int rent, Player &owner, int group)
:Buyable(name, players, position, price, isMortgaged, rent, owner, group) {}

int Bikepath::getRent()
{
	int newRent;
	if (allGroup == true)
	{
		newRent = 200;
		return newRent;
	}
	else if (numBikepaths == 3)
	{
		newRent = 100;
		return newRent;
	}
	else if (numBikepaths == 2)
	{
		newRent = 50;
		return newRent;
	}
	else if (numBikepaths == 1)
	{
		return rent;
	}
}

int Bikepath::getNumBikepaths()
{
	return numBikepaths;
}

void Bikepath::setNumBikePaths(int newNum)
{
	this->numBikepaths = newNum;
}
