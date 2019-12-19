#include "TaxSpace.h"

using namespace std;

TaxSpace::TaxSpace(std::string name, std::array<Player, 6>& players, int position)
: Space(name, players, position){}

void TaxSpace::calculateTax(Player curPLayer)
{
	Player citizen = curPLayer;
	if (position == 4)
	{
		int taxAmt = citizen.getBank() * carbonTax;
		cout << "The amount you owe for the Carbon Emissions Tax is $" + taxAmt << endl;
		citizen.subtractFromBank(taxAmt);
	}
	else if (position == 38)
	{
		cout << "You bought all the volunteers coffee (or tea, their preference) for their hard work!" << endl;
		citizen.subtractFromBank(coffeeBreak);
	}

}

	