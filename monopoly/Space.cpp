#include "Space.h"
#include <exception>
#include <iostream>

using namespace std;

Space::Space(string name, array<Player, 6>* players, int position)
{
	this->position = position;
	this->name = name;
	this->setNames(name);
	this->players = players;
}

Space::Space()
{
	this->name = "DEFAULT SQUARE";
	this->setNames(name);
	this->players = players;
	this->position = -1;
}

std::string Space::getLine(int line)
{
	int currLine = line % 5;
	

	if (currLine == 0)
	{
		return lineOne();
	}
	else if (currLine == 1)
	{
		return lineTwo();
	}
	else if (currLine == 2)
	{
		return lineThree();
	} 
	else if (currLine == 3)
	{
		return lineFour();
	}
	else if (currLine == 4)
	{
		return lineFive();
	}
	else if (currLine == 5)
	{
		return lineSix();
	}
	return std::string();
}

std::string Space::lineOne()
{
	return "---------";
}

std::string Space::lineTwo()
{
	return "        |";
}

std::string Space::lineThree()
{
	string result{topName};
	int spaceLeft = 8 - this->topName.length();
	for (int i{ 0 }; i < spaceLeft; i++)
	{
		result += " ";
	}
	result += "|";
	return result;
}

std::string Space::lineFour()
{
	
	string result{ bottomName };
	int spaceLeft = 8 - this->bottomName.length();
	for (int i{ 0 }; i < spaceLeft; i++)
	{
		result += " ";
	}
	result += "|";
	return result;
}

std::string Space::lineFive()
{
	//checks if players are blank templates and whether they occupy the square
	string result{ " " };
	array<Player, 6> players1;
	players1 = *players;
	for (Player p : players1)
	{
		if (p.isDefault())
		{
			result += " ";
		}
		else
		{
			if (p.getPosition() == this->position)
			{
				result += p.getIcon();
			}
			else
			{
				result += " ";
			}
		}
	}
	result += " |";
	return result;
}
std::string Space::lineSix()
{
	return "--------|";
}

void Space::setNames(string name)
{
	if (name.find(" ") == string::npos)
	{
		topName = name;
		bottomName = "";
	}
	else
	{
		topName = this->name.substr(0, this->name.find(" "));
		bottomName = this->name.substr(this->name.length() - this->name.find(" "), this->name.length() - this->topName.find(" ") - 1);
		
	}

	int topLen = topName.length();
	int bottomLen = bottomName.length();

	if (topLen > 8)
	{
		topName = topName.substr(0, 8);
	}
	if (bottomLen > 8)
	{
		bottomName = bottomName.substr(0, 8);
	}
}
