#pragma once
#include <string>

#ifndef PERSON_H
#define PERSON_H

class Person
{
protected:
	int bank{ 0 };
	std::string name;
public:
	Person(std::string name, unsigned int balance);
	void addToBank(int deposit);
	void subtractFromBank(int withdraw);
	int getBank();
	bool getIsBankrupt();
	void declareBankruptcy();
};

#endif
