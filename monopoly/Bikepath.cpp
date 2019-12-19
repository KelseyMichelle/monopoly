#include "Bikepath.h"
#include <iostream>
#include "GetInput.h"

using namespace std;

Bikepath::Bikepath(std::string name, std::array<Player, 6>& players, int position, int price, bool isMortgaged, int rent, Player& owner, int group, int groupSize)
:Buyable(name, players, position, price, isMortgaged, rent, owner, group, groupSize) {}

int Bikepath::getRent()
{
	int newRent;
	if (allGroup == true)
	{
		newRent = 200;
		return newRent;
	}
	else if (numBikepaths == 3)
	{
		newRent = 100;
		return newRent;
	}
	else if (numBikepaths == 2)
	{
		newRent = 50;
		return newRent;
	}
	else if (numBikepaths == 1)
	{
		return rent;
	}
}

int Bikepath::getNumBikepaths()
{
	return numBikepaths;
}

void Bikepath::setNumBikePaths(int newNum)
{
	this->numBikepaths = newNum;
}


void Bikepath::action(Player& player, array<Space, 40>& spaces)
{
	if (this->sameOwner(player))
	{
		if (GetInput::getYesNo("Would you like to use the bikepath? (y/n): "))
		{
			vector<Bikepath> paths;
			for (Space s : spaces)
			{
				if (s.getType() == 2)
				{
					Bikepath* path = dynamic_cast <Bikepath*>(&s);
					if (path->sameOwner(owner))
					{
						paths.push_back(*path);
					}
				}
			}
			string out = "which path would you live to ride to?\n";
			vector<string> options;
			for (unsigned int i{ 0 }; i < out.size(); i++)
			{
				cout << i << ". " << paths[i].getName() << endl;
				options.push_back(to_string(i));
			}
			int answer = stoi(GetInput::getString("? : ", options));
			player.setPos(paths[answer].getPos());

		}
	}
	else
	{
		cout << "owner: " << owner.getIcon() << endl;
		cout << "player: " << player.getIcon();
	}
	
}

bool Bikepath::sameOwner(Player& player)
{
	if (player.getIcon() == owner.getIcon())
	{
		return true;
	}
}
