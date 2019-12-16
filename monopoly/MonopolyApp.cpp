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
	array<Player*, 6> p1Ptr;
	
	
	Player newP{ "kels", "%" ,3};
	Player newP2{ "charlz", "*" , 2};
	p1[0] = newP;
	
	for (int i{ 0 }; i < 6; i++)
	{
		p1Ptr[i] = &p1[i];
		
	}

	array<Space, 40> board;
	array<Space, 40>* boardPtr = &board;
	array<Space*, 40> boardSpacePtr;

	Space s1{ "hubertsssssss sdfasdfsfsdfasdfsffsa", p1Ptr, 0, 2};
	vector<BikePath> bikepaths;
	vector<Space> spaces;
	int bikeCount{ 0 };
	int spaceCount{ 0 };
	for (int x{ 0 }; x < 40;x++)
	{
		if (x == 6 || x == 16 || x == 26 || x == 36)
		{
			BikePath s2{ "BIKE PATH", p1Ptr, x, 4, &boardSpacePtr };
			bikepaths.push_back(s2);
		}
		else
		{
			Space s2{ "space num" + to_string(x), p1Ptr, x, 1 };
			spaces.push_back(s2);
		}
	}
	for (BikePath b : bikepaths)
	{
		boardSpacePtr[b.getPosition()] = &b;
	}
	for (Space s : spaces)
	{
		boardSpacePtr[s.getPosition()] = &s;
	}
	
	cout << endl << bikepaths[0].getName() << "from bikepaths vector" << endl;
	cout << boardSpacePtr[6]->getName();
	array<array<InfoSquare, 3>, 3> infoSquares;
	array<array<InfoSquare, 3>, 3>* infoPtr = &infoSquares;
	Board b1{ &boardSpacePtr, p1Ptr, infoPtr };
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
		if (p1Ptr[0]->getPos() == 6)
		{
			if (GetInput().getString("Would you like to use the bike path? (y/n)", { "y","n" }) == "y")
			{
				Player* p = p1Ptr[0];
				Space* sp = boardSpacePtr[p->getPos()];
				//cout << sp->getName() << endl;
				sp->action(p);
			}
		}
	}

}