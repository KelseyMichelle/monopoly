#pragma once
#include <string>
#include <vector>
#include <array>
#include "Person.h"


#ifndef PLAYER_H
#define PLAYER_H


class Player : public Person
{
protected:

	std::string icon;
	int position;
	//std::array<Card, 10> inventory;
	std::array<int, 40> properties{ 1 };
	bool inJail = false;
	bool defaultSpace = false;
	bool isBankrupt = false;
	std::vector<int> ownedProperty;
	int turnsInJail;
	std::array<std::string, 40> propertyNames;
public:
	Player(std::string name, std::string icon, int pos, unsigned int bank, std::array<std::string,40> propertyNames);
	Player();
	void takeTurn();



	void putInJail();
	int moveForward(unsigned int toMove);
	bool tryEscapeJail();
	int getPosition();
	bool isDefault();
	std::string getIcon();
	int getPos();
	void setPos(int);
	void addToBank(int deposit);
	void subtractFromBank(int withdraw);
	int getBank();
	bool getIsBankrupt();
	void declareBankruptcy();
	void setNewProperty(int position);
};

#endif