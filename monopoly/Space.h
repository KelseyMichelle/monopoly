#pragma once

#include<iostream>
#include<array>
#include "Player.h"


class Space
{
public:
	Space(std::string name, std::array<Player, 6>& players, int position);
	Space();
	std::string getLine(int line);
	virtual void action(Player& player);
	virtual void action(Player& player, std::array<Space, 40> spaces);
	int getType();
	int getPos();
protected:
	int type = 0;
	int position;
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
	void setNames(std::string name);
};