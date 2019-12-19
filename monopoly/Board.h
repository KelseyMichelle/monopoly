#pragma once


#include <string>
#include "Space.h"
#include "InfoSquare.h"
#include <array>
#include "Player.h"

class Board
{
public:
	Board(std::array<Space*, 40>& spaces, std::array<Player, 6>& playersPtr, std::array<std::array<InfoSquare, 3>, 3>& infoSquarePtr);
	void printBoard();
	std::array<std::string, 40> getNames();
private:
	//define pointers for the spaces, players, and info squares
	std::array<Space*, 40>* spacesPtr;
	std::array<Player, 6>* playerPtr;
	std::array<std::array<InfoSquare, 3>, 3>* infoSquarePtr;
};
