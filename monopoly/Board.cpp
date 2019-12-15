#include "Board.h"

using namespace std;

Board::Board(std::array<Space, 40>* spacesPtr, array<Player, 6>* playersPtr)
{
	this->spacesPtr = spacesPtr;
	this->playerPtr = playersPtr;
}

void Board::printBoard()
{
	array<Space, 40> spaces = *spacesPtr;
	for (int x{ 0 }; x < 6; x++)
	{
		cout << "|";
		for (int i{ 0 }; i < 11; i++)
		{
			cout << spaces[i].printTile(x);
		}
		cout << endl;
	}
}
