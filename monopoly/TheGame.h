#pragma once
#include <array>
#include "Space.h"

class TheGame
{
public:
	TheGame(std::array<Space*, 40>& spaces);
	static std::array<Space*, 40>* getArray();
private:
	static std::array<Space*, 40>* gameArray;
};