#pragma once
#include <iostream>

class Card
{
protected:
	int cardID;
	std::string description;

public:
	Card(int cardID, std::string description);
	int getCardID();
	std::string getDescription();
};