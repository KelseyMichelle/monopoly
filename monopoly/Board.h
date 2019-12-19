#pragma once

#ifndef BOARD_H
#define BOARD_H

#include <string>
#include "Space.h"
#include "InfoSquare.h"
#include <array>
class Board
{
public:
	Board(std::array<Space, 40>& spaces, std::array<Player, 6>& playersPtr, std::array<std::array<InfoSquare, 3>, 3>& infoSquarePtr);
	void printBoard();
private:
	//define pointers for the spaces, players, and info squares
	std::array<Space, 40>* spacesPtr;
	std::array<Player, 6>* playerPtr;
	std::array<std::array<InfoSquare, 3>, 3>* infoSquarePtr;
};

#endif