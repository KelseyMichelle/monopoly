#pragma once
#include <iostream>
#include "Player.h"

class Card
{
protected:
	int cardID;
	std::string description;
	int type;
	int x;

public:
	Card(int cardID, std::string description, int type, int x);
	Card();
	int getCardID();
	std::string getDescription();
	void addType(Player curPlayer);
	void subtractType(Player curPlayer);
	void moveType(Player curPlayer);
};