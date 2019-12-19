#include "Property.h"

Property::Property(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int treeCost, int canopyCost)
: Buyable(name, players, position, price, isMortgaged, rent, owner, group)
{
	this->treeCost = treeCost;
	this->canopyCost = canopyCost;
}


int Property::getRent()
{
	int newRent;
	if (tree == 0 && canopy == 0)
	{
		if (allGroup == false)
		{
			return rent;
		}
		else if (allGroup == true)
		{
			newRent = rent * 2;
			return newRent;
		}
	}
	if (tree == 1)
	{
		newRent = rent * 5;
		return newRent;
	}
	else if (tree == 2)
	{
		newRent = (rent * 5) * 3;
		return newRent;
	}
	else if (tree == 3)
	{
		newRent = (rent * 5) * 9;
		return newRent;
	}
	else if (tree == 4)
	{
		newRent = rent * 16;
		return newRent;
	}
	else if (canopy == 1)
	{
		newRent = rent * 100;
		return newRent;
	}
}
