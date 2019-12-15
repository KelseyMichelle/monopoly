#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"
#include <array>

using namespace std;

int main()
{
	Dice d6{};
	array<Player*, 6> p1;
	array<Player*, 6>* p1Ptr = &p1;
	
	Player newP{ "kels", "%" ,3};
	Player* newPtr = &newP;
	p1[0] = newPtr;
	
	Space s1{"hubertsssssss", &p1, 0};
	array<Space, 40> board;
	
	for (int x{ 0 }; x < 11;x++)
	{
		Space s2{ "space num" + to_string(x), p1Ptr, x };
		board[x] = s2;

	}
	
	for (int x{ 0 }; x < 6; x++)
	{
		cout << "|";
		for (int i{ 0 }; i < 11; i++)
		{
			cout << board[i].printTile(x);
		}
		cout << endl;
	}
	int pos1 = newPtr->getPos();
	newPtr->setPos(2);
	for (int x{ 0 }; x < 6; x++)
	{
		cout << "|";
		for (int i{ 0 }; i < 11; i++)
		{
			cout << board[i].printTile(x);
		}
		cout << endl;
	}
}