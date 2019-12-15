#pragma once

#ifndef BOARD_H
#define BOARD_H

#include <string>
#include "Space.h"
#include <array>
class Board
{
public:
	Board(std::array<Space, 40>* spaces, std::array<Player, 6>* playersPtr);
	void printBoard();
private:
	std::array<Space, 40>* spacesPtr;
	std::array<Player, 6>* playerPtr;
};

#endif