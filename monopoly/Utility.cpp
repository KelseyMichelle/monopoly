#include "Utility.h"

int Utility::getRent(int dieRoll)
{
	int newRent;
	int die{ dieRoll };
	if (allGroup == true)
	{
		newRent = die * 10;
		return newRent;
	}
	else
	{
		newRent = die * 4;
		return newRent;
	}
}
