#pragma once
#include<iostream>
#include<array>
#include "Player.h"

#ifndef SPACE_H
#define SPACE_H

class Space
{
public:
	Space(std::string topName, std::string bottomName, std::array<Player, 6>& players, int position);
	Space();
	std::string getLine(int line);
	virtual void action(Player& player);
protected:
	int position;
	std::string topName;
	std::string bottomName;
	std::array<Player, 6>* players;
	std::string lineOne();
	std::string lineTwo();
	std::string lineThree();
	std::string lineFour();
	std::string lineFive();
	std::string lineSix();
	void setNames(std::string name);
};

#endif