#include "BikePath.h"
#include <string>
#include "GetInput.h"
using namespace std;

//BikePath::BikePath(std::string name, std::array<Player, 6>* players, int position, std::array<BikePath, 4>* bikePathsPtr, int type, array<Space, 40>* spaces) : Space(name, players, position, type) 
//{
//	this->bikePathsPtr = bikePathsPtr;
//};

void BikePath::action(Player* playerPtr)
{
	vector<Space*> bikePaths;
	array<Space*, 40> spaces = *spacesPtr;
	array<bool*, 40> props = playerPtr->getProperties();
	for (int i{ 0 }; i < sizeof(props); i++)
	{
		bool* owned = props[i];
		if (!*owned)
		{
			if (spaces[i]->getType() == 4)
			{
				bikePaths.push_back(spaces[i]);
			}
		}
	}
	for (Space* s : bikePaths)
	{
		cout << s->getName();
	}
}

