#pragma once
#include <string>


class Person
{
protected:
	int bank;
	std::string name;
public:
	Person(std::string name, unsigned int balance);
	int getBank(); // returns bank amount
	void setBank(unsigned int); 
	int addFunds(unsigned int); // returns new balance
	bool takeFunds(unsigned int); // returns true if enough money to cover the change in funds
};
