#pragma once
#include "Space.h"

class Buyable : public Space
{
protected:
	int position;
	int price;
	int rent;
	int group;
	std::string name;
	std::array<Player, 6>* players;
	std::string lineOne();
	std::string lineTwo();
	std::string lineThree();
	std::string lineFour();
	std::string lineFive();
	std::string lineSix();
	std::string topName;
	std::string bottomName;
	bool isMortgaged;
	bool allGroup;
	Player owner;
	

public:
	Buyable(std::string name, std::array<Player, 6>* players, int position, int price, bool isMortgaged, int rent, Player owner, int group);
	void setPrice(int newPrice);
	void setOwner(Player newOwner);
	void setIsMortgaged(bool TF);
	void setAllGroup(bool TF);
	std::string getName();
	int getPrice();
	virtual int getRent();
	bool getIsMortgaged();
	Player getPlayer();
	int getGroup();
	bool setAllGroup();
};