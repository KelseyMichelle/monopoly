#include "Property.h"
#include <iostream>

using namespace std;

Property::Property(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize, int treeCost, int canopyCost)
: Buyable(name, players, position, price, isMortgaged, rent, owner, group, groupSize)
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

void Property::plantTree()
{
	if (tree < 4)
	{
		owner.subtractFromBank(treeCost);
		tree++;
	}
	else
	{
		//give message that it's time to grow a canopy
	}
	
}

void Property::growCanopy()
{
	if (tree == 4)
	{
		owner.subtractFromBank(treeCost);
		canopy++;
		tree = 0;
	}
	else if (tree == 3)
	{
		owner.subtractFromBank(treeCost * 2);
		canopy++;
		tree = 0;
	}
	else if (tree == 2)
	{
		owner.subtractFromBank(treeCost * 3);
		canopy++;
		tree = 0;
	}
	else if (tree == 1)
	{
		owner.subtractFromBank(treeCost * 4);
		canopy++;
		tree = 0;
	}
	else if (tree == 0)
	{
		owner.subtractFromBank(canopyCost);
		canopy++;
	}
}

void Property::cutDownTree()
{
	if (tree > 0)
	{
		cout << "You want to destroy the tree you so carefully grew? OK boomer.";
		owner.addToBank(treeCost / 2);
		cout << "Thinking you can profit from the destruction of nature? Think again, you've been assessed a carbon emissions tax!";
		owner.subtractFromBank((treeCost / 2) * .75);
	}
}

void Property::deforestCanopy()
{
	if (canopy > 0)
	{
		cout << "It has taken great time and costs to cultivate this canopy and you are going to destroy it for some short term monetary gain??";
		owner.addToBank(canopyCost / 2);
		cout << "The amount of destruction you have committed cannot be so easily ignored. You have been assessed a carbon emissions tax!";
		owner.subtractFromBank((canopyCost / 2) * .75);
	}
}
