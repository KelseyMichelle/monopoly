#include<iostream>
#include "Dice.h"
#include<time.h>
#include "Space.h"

using namespace std;

int main()
{
	Dice d6{};
	int D6{ 6 };
	for (int x{ 0 }; x < 10; x++)
	{
		cout << d6.rollDie() << endl;
	}
	Space s1{ 0, "hubert square" };
	for (int x{ 0 }; x < 6; x++)
	{
		cout << s1.printTile(x) << endl;
	}
}