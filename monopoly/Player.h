#pragma once
#include <string>
#include <vector>
#include <array>



#ifndef PLAYER_H
#define PLAYER_H


class Player
{
protected:

	std::string name;
	std::string icon;
	int bank;
	int position;
	//std::array<Card, 10> inventory;
	std::array<bool*, 40> propertiesPtr{ 0 };
	bool inJail = false;
	bool defaultSpace = false;

public:
	Player(std::string name, std::string icon, int pos);
	Player();
	void takeTurn();
	void putInJail();
	bool tryEscapeJail();
	int getPosition();
	bool isDefault();
	std::string getIcon();
	int getPos();
	void setPos(int);
	std::array<bool*, 40> getProperties();
	
};

#endif