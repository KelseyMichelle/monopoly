#include <iostream>
#include "CardSource.h"

using namespace std;


CardSource::CardSource()
{
	flukeCards[0] = 
}

std::array CardSource::getFlukeCards()
{
	return flukeCards;
}

std::array CardSource::getAllFlukeCards()
{
	return allFlukeCards;
}

std::array CardSource::getGeocacheCards()
{
	return geocacheCards;
}

std::array CardSource::getAllGeocacheCards()
{
	return allGeocacheCards;
}
