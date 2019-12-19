#include <iostream>
#include "CardSource.h"

using namespace std;


CardSource::CardSource()
{
	//flukeCards[0] = 
}

std::array<Card,15> CardSource::getFlukeCards()
{
	return flukeCards;
}

std::array<Card, 20> CardSource::getAllFlukeCards()
{
	return allFlukeCards;
}

std::array<Card, 15> CardSource::getGeocacheCards()
{
	return geocacheCards;
}

std::array<Card, 20> CardSource::getAllGeocacheCards()
{
	return allGeocacheCards;
}
