#pragma once
#include "Space.h"
#include <array>

#ifndef BIKEPATH_H
#define BIKEPATH_H

class BikePath : public Space
{
public:

	BikePath(std::string name, std::array<Player*, 6> players, int position, int type, std::array<Space*, 40>* spacesPtr) : Space(name, players, position, type)
	{
		this->spacesPtr = spacesPtr;
	}
	void action(Player* playerPtr);
private:
	std::array<Space*, 40>* spacesPtr;
};





#endif
