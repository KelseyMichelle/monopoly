#pragma once
#include "Buyable.h"

class Bikepath : public Buyable
{
protected:
	int position;
	int price;
	int rent;
	int group;
	int numBikepaths;
	std::string name;
	std::array<Player, 6>* players;
	std::string topName;
	std::string bottomName;
	bool isMortgaged;
	bool allGroup;
	Player owner;

public:
	Bikepath(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group);
	int getRent() override;
	int getNumBikepaths();
	void setNumBikePaths(int newNum);
};