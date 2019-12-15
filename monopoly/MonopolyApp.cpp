#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"
#include <array>
#include "Board.h"
#include "InfoSquare.h"

using namespace std;

int main()
{
	Dice d6{};
	array<Player, 6> p1;
	array<Player, 6>* p1Ptr = &p1;
	
	Player newP{ "kels", "%" ,3};
	p1[0] = newP;
	Space s1{"hubertsssssss sdfasdfsfsdfasdfsffsa", p1Ptr, 0};
	array<Space, 40> board;

	for (int x{ 0 }; x < 40;x++)
	{
		Space s2{ "space num" + to_string(x), p1Ptr, x };
		board[x] = s2;
	}
	array<array<InfoSquare, 3>, 3> infoSquares;
	array<array<InfoSquare, 3>, 3>* infoPtr = &infoSquares;
	Board b1{ &board, &p1, infoPtr };
	b1.printBoard();

}