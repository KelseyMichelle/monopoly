#include "Person.h"

using namespace std;
Person::Person(std::string name, unsigned int balance) 
{
	this->name = name;
	this->bank = balance;
}

int Person::getBank()
{
	return bank;
}

void Person::setBank(unsigned int newValue)
{
	bank = newValue;
}

int Person::addFunds(unsigned int funds)
{
	bank += funds;
	return bank;
}

bool Person::takeFunds(unsigned int reduction)
{
	try {
		bank -= reduction;
		return true;
	}
	catch (exception e)
	{
		return false;
	}
	
}
