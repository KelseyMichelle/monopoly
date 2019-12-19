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
	bool validInput = false;
	int intResponse{ 0 };
	while (!validInput)
	{
		intResponse = GetInput().getInt(query);
		if (intResponse >= min&& intResponse <= max)
		{
			validInput = true;
		}
	}
	return intResponse;
}

string GetInput::getString(std::string query)
{
	cout << query;
	string response{ "" };
	cin >> response;
	return response;
}

string GetInput::getString()
{
	return getString("please enter a string: ");
}

string GetInput::getString(std::string query, std::vector<std::string> options)
{
	bool validInput{ false };
	string response{ "" };
	while (!validInput)
	{
		response = GetInput().getString(query);

		for (string& s : options)
		{
			if (response == s)
			{
				validInput = true;
			}
		}
		if (!validInput)
		{
			cout << "invalid input, please enter one of the following: ";
			for (string& s : options)
			{
				cout << s <<", ";
			}
			cout << endl;
		}

	}
	return response;
}

std::string GetInput::getString(std::string query, std::vector<std::string> options, std::vector<std::string> secretOptions)
{
	bool validInput{ false };
	string response{ "" };
	while (!validInput)
	{
		response = GetInput().getString(query);

		for (string& s : options)
		{
			if (response == s)
			{
				validInput = true;
			}
		}
		for (string& s : secretOptions)
		{
			if (response == s) {
				validInput = true;
			}
		}
		if (!validInput)
		{
			cout << "invalid input, please enter one of the following: ";
			for (string& s : options)
			{
				cout << s << ", ";
			}
			cout << endl;
		}

	}
	return response;
}
