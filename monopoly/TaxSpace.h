#pragma once
#include "Space.h"

class TaxSpace : public Space
{
protected:
	int position;
	std::string name;
	std::array<Player, 6>* players;
	std::string topName;
	std::string bottomName;
	double carbonTax = .1;
	int coffeeBreak = 100;

public:
	TaxSpace(std::string topName, std::string bottomName, std::array<Player, 6>& players, int position);
	void calculateTax(Player curPLayer);
};
