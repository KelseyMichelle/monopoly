#include <iostream>
#include "CardSource.h"

using namespace std;


CardSource::CardSource()
{
	array<Card*, 10> flukeCards;
	flukeCards[0] = new Card(0, "Nature trail! Advance to Go!", 3, 0);
	flukeCards[1] = new Card(1, "Advance to Apple Lane.", 3, 24);
	flukeCards[2] = new Card(2, "Advance to Cherry Place.", 3, 11);
	flukeCards[3] = new Card(3, "You found some cash while picking up litter! +$50", 1, 50);
	flukeCards[4] = new Card(4, "Cornered by an angry badger!", 3, 10);
	flukeCards[5] = new Card(5, "Your grant didn't come through before the bills. Overdraft fee of $50.", 2, 50);
	flukeCards[6] = new Card(6, "Pedal your way on down to the Orchid Bikepath.", 3, 5);
	flukeCards[7] = new Card(7, "You got a donation from an anonymous donor of $200.", 1, 200);
	flukeCards[8] = new Card(8, "You sold the naming rights of a new plant species to some rich guy for $400!", 1, 400);
	flukeCards[9] = new Card(9, "You bought organic snacks for your workers for $100.", 2, 100);
	
	array<Card*, 15> allFlukeCards;
	for (int i{ 0 }; i < 10; i++)
	{
		allFlukeCards[i] = flukeCards[i];
	}
	allFlukeCards[10] = new Card(10, "Angry badger bait, better hold on to this, you might need it.", 4);
	allFlukeCards[11] = new Card(11, "You throw nature debris at an opposing player, causing them to lose a turn.", 4);
	allFlukeCards[12] = new Card(12, "Furious at having to pay to observe nature, you would rather see the world burn and start a fire. This burns down an opposing player's tree.", 4);
	allFlukeCards[13] = new Card(13, "Money has been a little tight so you convinced your college buddies to stage a protest allowing you to camp for free instead of paying rent.", 4);
	allFlukeCards[14] = new Card(14, "Your opponent has been burning trees and cutting down canopies and you're sick of it. You find some protestors to chain themselves to one of their trees so they can't remove it!", 4);

	array<Card*, 15> geocacheCards;
	geocacheCards[0] = new Card(0, "Carpool your way to Go.", 3, 0);
	geocacheCards[1] = new Card(1, "One of your favorite volunteers passed away and left thier entire estate to your cause. That $50 will sure do some good somewhere.", 1, 50);
	geocacheCards[2] = new Card(2, "You discovered the hideout of an escaped convict and got a police reward of $150!", 1, 150);
	geocacheCards[3] = new Card(3, "While planting your herb garden you found a rusty nail, in your hand. Tetanus shot cost $200", 2, 200);
	geocacheCards[4] = new Card(4, "OH NO! You've been cornered by an angry badger!", 3, 10);
	geocacheCards[5] = new Card(5, "Your lemonade stand fundraiser earned you a whole $200.", 1, 200);
	geocacheCards[6] = new Card(6, "Some local celebrety needs to look good in the media and sent you $500 in donation money.", 1, 500);
	geocacheCards[7] = new Card(7, "You finally upgraded your car for a new electric vehicle and earned your tax credit of $200. Too bad, that's only about half the monthly payment you'll be making for the next 10 years.", 1, 200);
	geocacheCards[8] = new Card(8, "Proceeds from your cooperative farm stands came through. Each player gets $50", 5, 50);
	geocacheCards[9] = new Card(9, "You received a government grant of $200!", 1, 200);
	geocacheCards[10] = new Card(10, "You had to go to the ER after a swan attacked you, that's $200 out of your pocket.", 2, 200);
	geocacheCards[11] = new Card(11, "Time for that student loan payment again, only $150 every year for the rest of your life.", 2, 150);
	geocacheCards[12] = new Card(12, "You were fined $200 for property damage while protesting.", 2, 200);
	geocacheCards[13] = new Card(13, "Grandma remembered your birthday! There was a crisp $10 bill in there.", 1, 10);
	geocacheCards[14] = new Card(14, "After deciding not to build an earth home, you turn in all those cans for $100.", 1, 100);


}

std::array<Card,10> CardSource::getFlukeCards()
{
	return flukeCards;
}

std::array<Card, 15> CardSource::getAllFlukeCards()
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
