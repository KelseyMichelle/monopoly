#include "GetInput.h"
#include <iostream>
#include <vector>

using namespace std;
int GetInput::getInt(std::string query)
{
	string response{ "" };
	
	bool validInput = false;
	int intResponse{ 0 };
	while (!validInput)
	{
		cout << query;
		cin >> response;
		try
		{
			intResponse = stoi(response);
			validInput = true;
		}
		catch (exception e)
		{
			cout << "invalid input! please ensure you are using a valid input" << endl;
		}

	}
	return intResponse;
}

int GetInput::getInt(std::string query, int min, int max)
{
	return 0;
}

int GetInput::getString(std::string query)
{
	return 0;
}

int GetInput::getString()
{
	return 0;
}

int GetInput::getString(std::string query, std::vector<std::string> options)
{
	return 0;
}
