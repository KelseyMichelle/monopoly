#include "CardSpace.h"
#include "Dice.h"
#include <exception>
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

default_random_engine engine{ static_cast<unsigned int>(time(0)) };
uniform_int_distribution <unsigned int> randomInt{ 1, 20 };

CardSpace::CardSpace(std::string name, std::array<Player, 6>* players, int position, std::array<Card, 20>* cards)
: Space(name, players, position) 
{
	this->cards = cards;
}

Card CardSpace::dealCard(Player thePlayer)
{
	static std::array<int, 20> discard;
	int drawnCard = randomInt(engine);
	for (int i : discard)
	{
		while (drawnCard == i)
		{
			int drawnCard = randomInt(engine);
		}
	}
	return cards[drawnCard];
}
