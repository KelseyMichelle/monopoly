#include "Dice.h"
#include<random>
#include <time.h>
#include <iostream>

using namespace std;
int Dice::rollDie(int min, int max)
{
	static default_random_engine engine{ static_cast<unsigned int>(time(0)) };
	uniform_int_distribution<unsigned int> randomInt(min, max);
	return randomInt(engine);
}
