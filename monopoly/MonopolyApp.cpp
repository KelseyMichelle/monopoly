#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"
#include <array>
#include "Board.h"
#include "InfoSquare.h"
#include "GetInput.h"
#include "BikePath.h"

using namespace std;

int main()
{
	Dice d6{};
	array<Player, 6> p1;
	
	
	
	Space s1{"hubertsssssss sdfasdfsfsdfasdfsffsa", p1, 0};
	array<Space, 40> board;
	for (int x{ 0 }; x < 40;x++)
	{
		Space s2{ "space num" + to_string(x), p1, x };

		board[x] = s2;
	}
	board[0] = s1;
	Person banker{ "bill the banker", 5 };
	Bikepath parsnip{ "parnips place", p1, 5, 60, false, 10, p1[0], 2,4 };
	Bikepath potato{ "potatos", p1, 5, 60, false, 10, p1[0], 2,4 };
	board[5] = parsnip;
	board[15] = potato;
	Player newP{ "kels", "%" ,3, 100};
	Player newP2{ "charlz", "*" , 2, 100 };
	p1[0] = newP;
	p1[2] = newP2;
	array<array<InfoSquare, 3>, 3> infoSquares;
	Board b1{ board, p1, infoSquares };
	b1.printBoard();
	string response;
	
	cout << p1[0].getPos();
	while (response != "q")
	{
	}

}