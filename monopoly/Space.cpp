#include "Space.h"
#include <iostream>

using namespace std;

Space::Space(int position, std::string name)
{
	this->position = position;
	this->name = name;
}

std::string Space::printTile(int line)
{
	int currLine = line % 6;
	string topName = this->name.substr(0, this->name.find(" "));
	string bottomName = this->name.substr(this->name.length() - this->name.find(" "), this->name.length()- this->name.find(" "));

	if (currLine == 0)
	{
		return "-------";

	}
	else if (currLine == 1)
	{
		return "       |";
	} else if (currLine == 2)
	{
		return topName + "|";
	case 3:
		return bottomName + "|";
		break;
	case 4:
		return "PLAYER|";
		break;
	case 5:
		return "======|";
	}
	return std::string();
}
