#include "CardSpace.h"
#include <exception>
#include <iostream>

CardSpace::CardSpace(std::string name, std::array<Player, 6>* players, int position, std::array<Card, 20>* cards)
: Space(name, players, position) 
{
	this->cards = cards;
}

void CardSpace::shuffleCards()
{
	
}
