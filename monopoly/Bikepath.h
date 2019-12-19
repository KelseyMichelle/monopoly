#pragma once
#include "Buyable.h"
#include <array>
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
	int type = 2;

public:
	Bikepath(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize);
	int getRent() override;
	int getNumBikepaths();
	void setNumBikePaths(int newNum);
	void action(Player& player, std::array<Space, 40>& spaces);
	bool sameOwner(Player& player);
};