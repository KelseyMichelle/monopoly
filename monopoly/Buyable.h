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
	std::array<Player*, 6>* players;
	std::string topName;
	std::string bottomName;
	bool isMortgaged = false;
	bool allGroup = false;
	Player owner;
	

public:
	Buyable(std::string topName, std::string bottomName, std::array<Player*, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize);
	void setPrice(int newPrice);
	void setOwner(Player& newOwner);
	void setIsMortgaged(bool TF);
	void setAllGroup(bool TF);
	std::string getName();
	int getPrice();
	virtual int getRent();
	bool getIsMortgaged();
	Player getPlayer();
	int getGroup();
	bool setAllGroup();
	void mortgageProperty();
	int buyable{ true };
	void buyProperty(Player& newOwner) override;
	void liftMortgage();
};