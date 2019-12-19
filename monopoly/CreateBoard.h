#pragma once
#include "Player.h"
#include "Card.h"
#include "Space.h"



class CreateBoard
{
public:
	static std::array<Space*, 40> createBoard(std::array<Player, 6>& players, Player& banker, std::array<Card, 20> geoCacheCards, std::array<Card, 20> flukeCards);
};