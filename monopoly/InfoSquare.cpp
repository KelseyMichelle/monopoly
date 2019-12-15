#include "InfoSquare.h"

InfoSquare::InfoSquare()
{
}

std::string InfoSquare::getLine(int line)
{
	if (line == 0)
	{
		return lineOne();
	}
	else if (line == 1)
	{
		return lineTwo();
	}
	else
	{
		return propertyLine(line);
	}
}

std::string InfoSquare::lineOne()
{
	return "                    |";
}

std::string InfoSquare::lineTwo()
{
	return "                    |";
}

std::string InfoSquare::propertyLine(int line)
{
	if (line == 14)
	{
		return "--------------------|";
	}
	return "                    |";
}
