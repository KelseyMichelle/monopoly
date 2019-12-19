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

void Person::addToBank(int funds)
{
	bank += funds;
}

void Person::subtractFromBank(int withdraw)
{
	bank -= withdraw;
}
