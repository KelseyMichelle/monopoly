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
	Player newP2{ "charlz", "*" , 2};
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
	string response;

	while (response != "q")
	{
		cout << "what do you wanna do? (f/b): ";
		cin >> response;
		if (response == "f")
		{
			p1[0].setPos(p1[0].getPos() + 1);
		} else if (response == "b")
		{
			p1[0].setPos(p1[0].getPos() - 1);
		}
		cout << "\033[2J\033[1;1H";
		b1.printBoard();
	}

}