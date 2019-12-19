#pragma once
#include <array>
#include "Card.h"

class CardSource

{
protected:
	std::array<Card, 15> flukeCards;
	std::array<Card, 20> allFlukeCards;
	std::array<Card, 15> geocacheCards;
	std::array<Card, 20> allGeocacheCards;

public:
	CardSource();
	std::array getFlukeCards();
	std::array getAllFlukeCards();
	std::array getGeocacheCards();
	std::array getAllGeocacheCards();
};
