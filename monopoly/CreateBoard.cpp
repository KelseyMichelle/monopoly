#include <iostream>
#include "Space.h"
#include "Property.h"
#include "Card.h"
#include "CardSpace.h"
#include "TaxSpace.h"
#include "Utility.h"
#include "CreateBoard.h"

using namespace std;

array<Space*, 40> CreateBoard::createBoard(array<Player, 6>& players, Player& banker, array<Card, 20> geoCacheCards, array<Card, 20> flukeCards)
{
	array<Space*,40> output;

	output[0] = new Space( "GO",  players, 0 );
	//Property(name, players, position,price, isMortgaged, rent, owner, group,groupSize,treeCost,canopyCost)
	//Property(std::string name, std::array<Player, 6> & players, int position, int price, bool isMortgaged, int rent, Player & owner, int group, int groupSize, int treeCost, int canopyCost)
	output[1] = new Property("BUCKEYE STREET", players, 1, 60, false, 2, banker, 6,2, 50, 250);
	output[2] = new CardSpace("GeoCache", players, 2, geoCacheCards);
	output[3] = new Property("Pine Road", players, 3, 60, false, 4, banker, 6,2, 50, 250);
	output[4] = new TaxSpace("CARBON TAX", players, 4);
	output[5] = new Property("Orchid Bikepath", players,5, 200, false, 5, banker, -1, 4, 50, 250); // TO BIKEPATH IF ENOUGH TIME
	output[6] = new Property("Spruce Avenue", players, 6, 100, false, 6, banker, 11, 3, 50, 250);
	output[7] = new CardSpace("GeoCache", players, 7, flukeCards);
	output[8] = new Property("Birch Avenue", players, 8, 100, false, 6, banker, 11, 3, 50, 250);
	output[9] = new Property("Juniper Street", players, 9, 120, false, 8, banker, 11, 3, 50, 250);
	output[10] = new Space("BADGER CORNER", players, 10);
	output[11] = new Property("Cherry Place", players, 11, 140, false, 10, banker, 13, 3, 100, 500);
	output[12] = new Utility("SOLAR PARK", players, 12, 150, false, 10, banker, 1, 3);
	output[13] = new Property("Spruce Blvd", players, 13, 140, false, 10, banker, 13, 3, 100, 500);
	output[14] = new Property("Maple Avenue", players, 14, 160, false, 12, banker, 13, 3, 100, 500);
	output[15] = new Property("Tulip Bikepath", players, 15, 200, false, 5, banker, -1, 4, 50, 250); // TO BIKEPATH IF ENOUGH TIME
	output[16] = new Property("Hemlock Lane", players, 16, 180, false, 14, banker, 8, 3, 100, 500);
	output[17] = new CardSpace("Fluke!", players, 17, flukeCards);
	output[18] = new Property("Ash Avenue", players, 18, 180, false, 14, banker, 8, 3, 100, 500);
	output[19] = new Property("Sequoia Street", players, 19, 180, false, 16, banker, 8, 3, 100, 500);
	output[20] = new Space("FREE CAMPING", players, 20);
	output[21] = new Property("Oak Street", players, 21,220, false, 18, banker, 12, 3, 150, 750);
	output[22] = new CardSpace("Fluke!", players, 22, flukeCards);
	output[23] = new Property("Cedar Place", players, 23, 220, false, 18, banker, 12, 3, 150, 750);
	output[24] = new Property("Apple Lane", players, 24, 240, false, 20, banker, 12, 3, 150, 750);
	output[25] = new Property("Violet Bikepath", players, 25, 200, false, 5, banker, -1, 4, 50, 250); // TO BIKEPATH IF ENOUGH TIME
	output[26] = new Property("Larch Lane", players, 26, 260, false, 22, banker, 14, 3, 150, 750);
	output[27] = new Property("Plum Avenue", players, 27, 260, false, 22, banker, 14, 3, 150, 750);
	output[28] = new Utility("Wind Farm", players, 28, 150, false, 10, banker, 1, 3);
	output[29] = new Property("Walnut Avenue", players, 29, 280, false, 24, banker, 14, 3, 150, 750);
	output[30] = new Space("BADGER ATTACK", players, 30);
	output[31] = new Property("Poplar Stree", players, 31, 300, false, 26, banker, 2, 3, 200, 1000);
	output[32] = new Property("Walnut Avenue", players, 32, 300, false, 26, banker, 2, 3, 200, 1000);
	output[33] = new CardSpace("GeoCache", players, 33, flukeCards);
	output[34] = new Property("Hazel Place", players, 34, 320, false, 28, banker, 2, 3, 200, 1000);
	output[35] = new Property("Hibiscus Bikepath", players, 35, 200, false, 5, banker, -1, 4, 50, 250); // TO BIKEPATH IF ENOUGH TIME
	output[36] = new CardSpace("Fluke!", players, 36 , flukeCards);
	output[37] = new Property("Willow Lane", players, 37, 350, false, 35, banker, 9, 2, 200, 1000);
	output[38] = new TaxSpace("Expenses", players, 38);
	output[39] = new Property("Redwood Forest", players, 39, 400, false, 50, banker, 9, 2, 200, 1000);

	return output;
}
