#include<iostream>
#include "Dice.h"

using namespace std;

int main()
{
	Dice d6{};
	for (int x{ 0 }; x < 10; x++)
	{
		cout << d6.rollDie(1,6) << endl;
	}
}