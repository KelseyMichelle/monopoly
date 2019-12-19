#pragma once
#include "Buyable.h"

class Utility : public Buyable
{
protected:
	int position;
	int price;
	int rent;
	int group;
	std::string name;
	std::array<Player, 6>* players;
	std::string topName;
	std::string bottomName;
	bool isMortgaged;
	bool allGroup;
	Player owner;

public:
	Utility(std::string topName, std::string bottomName, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize);
	int getRent(int dieRoll);

};
