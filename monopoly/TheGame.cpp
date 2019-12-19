#include "TheGame.h"

TheGame::TheGame(std::array<Space*, 40>& spaces)
{
	gameArray = &spaces;
}

std::array<Space*, 40>* TheGame::getArray()
{
	return gameArray;
}
