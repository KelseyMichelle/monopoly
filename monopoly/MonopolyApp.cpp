#include<iostream>
#include "Dice.h"
#include<time.h>

using namespace std;

int main()
{
	Dice d6{};
	int D6{ 6 };
	for (int x{ 0 }; x < 10; x++)
	{
		cout << d6.rollDie() << endl;
		
	}
}