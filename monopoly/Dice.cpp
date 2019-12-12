#include "Dice.h"
#include<random>
#include <time.h>
#include <iostream>

using namespace std;
static default_random_engine engine{ static_cast<unsigned int>(time(0)) };
int Dice::rollDie(int& min, int& max)
{
	
	uniform_int_distribution<unsigned int> randomInt(min, max);

	return randomInt(engine);
}

int Dice::rollDie(int min, int max)
{
	uniform_int_distribution<unsigned int> randomInt(min, max);
	return randomInt(engine);
}

int Dice::rollDie()
{
	uniform_int_distribution<unsigned int> randomInt(1, 6);
	return randomInt(engine);
}
