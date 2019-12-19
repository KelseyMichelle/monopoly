#pragma once
#include "Space.h"
#include "Card.h"

class CardSpace : public Space
{
protected:
	int position;
	std::string name;
	std::array<Player, 6>* players;
	std::string topName;
	std::string bottomName;
	std::array<Card, 20>* cards;
	
public:
	CardSpace(std::string name, std::array<Player, 6>& players, int position, std::array<Card, 20>& cards);
	Card dealCard(Player thePlayer);


};