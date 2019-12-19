#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"
#include <array>
#include "Board.h"
#include "InfoSquare.h"
#include "GetInput.h"

using namespace std;

int main()
{
	Dice d6{};
	array<Player, 6> p1;
	
	Player newP{ "kels", "%" ,3, 100};
	Player newP2{ "charlz", "*" , 2, 100};
	p1[0] = newP;
	p1[2] = newP2;
	Space s1{"hubertsssssss sdfasdfsfsdfasdfsffsa", p1, 0};
	array<Space, 40> board;
	for (int x{ 0 }; x < 40;x++)
	{
		Space s2{ "space num" + to_string(x), p1, x };

		board[x] = s2;
	}
	board[0] = s1;
	array<array<InfoSquare, 3>, 3> infoSquares;
	Board b1{ board, p1, infoSquares };
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
		system("CLS");
		b1.printBoard();
	}

}