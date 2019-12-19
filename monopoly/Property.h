#pragma once
#include "Buyable.h"

class Property : public Buyable
{
protected:
	int position;
	int price;
	int rent;
	int group;
	int treeCost;
	int canopyCost;
	int tree{ 0 };
	int canopy{ 0 };
	std::string name;
	std::array<Player*, 6>* players;
	std::string topName;
	std::string bottomName;
	bool isMortgaged{ false };
	bool allGroup{ false };
	Player owner;

public:
	Property(std::string topName, std::string bottomName, std::array<Player*, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize, int treeCost, int canopyCost);
	int getRent() override;
	void plantTree();
	void growCanopy();
	void cutDownTree();
	void deforestCanopy();
};