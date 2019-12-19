#include "Utility.h"

Utility::Utility(std::string topName, std::string bottomName, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize) 
	: Buyable (topName, bottomName, players, position, price, isMortgaged, rent, owner, group, groupSize)
{
}

int Utility::getRent(int dieRoll)
{
	int newRent;
	int die{ dieRoll };
	if (allGroup == true)
	{
		newRent = die * 10;
		return newRent;
	}
	else
	{
		newRent = die * 4;
		return newRent;
	}
}
