#pragma once
#include <array>
#include "Card.h"

class CardSource

{
protected:
	std::array<Card, 10> flukeCards;
	std::array<Card, 15> allFlukeCards;
	std::array<Card, 15> geocacheCards;
	std::array<Card, 20> allGeocacheCards;

public:
	CardSource();
	std::array<Card, 10> getFlukeCards();
	std::array<Card, 15> getAllFlukeCards();
	std::array<Card, 15> getGeocacheCards();
	std::array<Card, 20> getAllGeocacheCards();
};
