#include "Board.h"
#include "InfoSquare.h"
#include <array>

using namespace std;

Board::Board(std::array<Space, 40>* spaces, std::array<Player, 6>* playersPtr, std::array<std::array<InfoSquare, 3>, 3>* infoSquarePtr)
{
	this->spacesPtr = spaces;
	this->playerPtr = playersPtr;
	this->infoSquarePtr = infoSquarePtr;
}

void Board::printBoard()
{
	// spaces is a dereferenced spaces array, which is used to
	// get the individual lines that need to be printed
	// while iterating through the board, printing in total
	// 11 different tiles intitiall to finalize the top of the board
	array<Space, 40> spaces = *this->spacesPtr;

	for (int x{ 0 }; x < 5; x++)
	{
		cout << "|";
		for (int i{ 0 }; i < 11; i++)
		{
			cout << spaces[i].getLine(x);
		}
		cout << endl;
	}

	int squareCounter{ 0 };
	int infoCounter{ 0 };

	for (int x{ 0 }; x < 45; x++)
	{
		if (x > 1 && x % 5 == 0)
		{
			squareCounter++;
		}
		if (x > 1 && x % 15 == 0)
		{
			infoCounter++;
		}
		cout << "|";
		cout << spaces[39 - squareCounter].getLine(x);
		array<array<InfoSquare, 3>, 3> infoSquares = *infoSquarePtr;

		if (x == 0)
		{
			for (int i{ 0 }; i < 63; i++)
			{
				cout << "-";
			}
		}
		else {
			for (InfoSquare inf : infoSquares[infoCounter])
			{

				cout << inf.getLine((x-1) % 15);
			}
		}
		cout << spaces[squareCounter + 11].getLine(x);
		cout << endl;
	}
	for (int i{ 0 }; i < 77; i++)
		{
			cout << "-";
		}
	cout << endl;

	for (int x{ 1 }; x <5; x++)
	{
		cout << "|";
		for (int i{ 30 }; i > 19; i--)
		{
			cout << spaces[i].getLine(x);
		}
		cout << endl;
	}
}