#include <string>
#include <vector>
#include "Space.h"

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
	std::vector<Space> properties;
	bool inJail = false;
public:
	void takeTurn();
	void putInJail();
	bool tryEscapeJail();
	int getPosition();
};

#endif