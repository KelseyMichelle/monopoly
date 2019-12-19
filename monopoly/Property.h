#pragma once
#include "Buyable.h"

class Property : public Buyable
{
protected:
	int position;
	int price;
	int rent;
	int group;
	int tree{ 0 };
	int canopy{ 0 };
	std::string name;
	std::array<Player, 6>* players;
	std::string topName;
	std::string bottomName;
	bool isMortgaged;
	bool allGroup;
	Player owner;

public:
	Property(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group);
	int getRent() override;
};