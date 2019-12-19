#include "Player.h"
#include "GetInput.h"
#include "Dice.h"
#include <iostream>
#include "Space.h"
#include "Board.h"
#include "TheGame.h"
//spaghetti

using namespace std;

std::string Player::getName()
{
	return name;
}

//create player object
Player::Player(std::string name, std::string icon,int position, int balance, array<string, 40> propertyNames) : Person(name, balance)
{
	this->name = name;
	this->icon = icon;
	this->position = position;
	defaultSpace = false;
	this->propertyNames = propertyNames;
}
//default constructor
Player::Player() : Person ("default", 5000)
{
	this->icon = "*";
	this->defaultSpace = true;
	this->position = 0;
}
//go through turn
void Player::takeTurn()
{
	//only take turn normally if not in jail
	string dice;

	if (!inJail)
	{
		int rollCount{ 0 };
		int d1;
		int d2;
		do
		{
			rollCount++;
			d1 =Dice::rollDie();
			d2 = Dice::rollDie();
			
			cout << "Dice roll: " << d1 << " + " << d2 << " = " << (d1 + d2) << endl;
			
			moveForward(d1 + d2);
			cout << "You are now on space #" << position << ", " << propertyNames[position] << endl;
			
		} while (d1 == d2 && rollCount != 3);
		if (rollCount == 4)
		{
			putInJail();
		}
		else
		{
			cout << "Options:" << endl
				<< "declare -  Declare bankrupty" << endl
				<< "owned - see properties" << endl
				<< "end - end turn" << endl;
			string choice = GetInput::getString("what would you like to do?: ", { "declare", "owned", "end" }, { "jail", "rosebud", "move", "buyany" });
			if (choice == "declare")
			{
				this->declareBankruptcy();
			}
			else if (choice == "owned")
			{
				for (int i{ 0 }; i < 40; i++)
				{
					if (properties[i] != 0)
					{
						cout << propertyNames[i] << endl;
					}
				}
			}
			else if (choice == "jail")
			{
				cout << "you've chosen the badger.. good luck" << endl;
				putInJail();
			}
			else if (choice == "move")
			{
				int moveTo = GetInput::getInt("which square would you like to move to?(0-39): ", 0, 39);
				position = moveTo;
			}
			else if ("buyany")
			{
				int moveTo = GetInput::getInt("which square would you like to buy? (0-39): ", 0, 39);
				properties[moveTo] = 1;
			}
			
		}

	}
	else
	{
		tryEscapeJail();
	}

}


void Player::putInJail()
{
	cout << "You've been attacked by a badger due to your swift movements! It must have mistook you for a snake!" << endl;
	position = 10;
	inJail = true;
}
int Player::moveForward(unsigned int toMove)
{
	position += toMove;
	if (position >= 40)
	{
		bank += 200;
		cout << "you've passed go and collected $200!" << endl;
		position -= 40;
	}
	return position;
}
bool Player::tryEscapeJail()
{
	if (inJail)
	{
		if (turnsInJail >= 3)
		{
			cout << "the badger got bored and decided to start harassing others - you've escaped... for now" << endl;
			inJail = false;
		}
		else
		{
			string choice = GetInput::getString("Would you like to bribe the badger with $50 or try to escape? (bribe/escape)", { "bribe", "escape" });
			if (choice == "escape")
			{
				int dieCount{ 0 };
				bool fail = false;
				int d1;
				int d2;
				while (dieCount < 3 && !fail)
				{
					dieCount++;
					d1 = Dice::rollDie();
					d2 = Dice::rollDie();
					if (d1 == d2)
					{
						dieCount++;
					}
					else
					{
						fail = true;
						return false;
					}
					cout << "you rolled " << d1 << " and " << d2 << endl;
				}
				if (!fail)
				{
					inJail = false;
					cout << "you have escaped the badger!";
					return true;
				}
			}
			else
			{
				subtractFromBank(50);
				cout << "the badger, satisfied with it's bribe, wanders off. for now.";
				inJail = false;
			}
		}
	}
	return false;
	
}

int Player::getPosition()
{
	return this->position;
}

bool Player::isDefault()
{
	return defaultSpace;
}

string Player::getIcon()
{
	return this->icon;
}

int Player::getPos()
{
	return this->position;
}

void Player::setPos(int pos)
{
	this->position = pos;
}

void Player::addToBank(int deposit)
{
	this->bank += deposit;
}

void Player::subtractFromBank(int withdraw)
{
	int newBank = this->bank - withdraw;
	if (newBank >= 0)
	{
		this->bank -= withdraw;
	}
	else
	{
		cout << "You don't seem to have enough money, perhaps you should liquidate some assets or declare bankruptcy.\n";
	}
}

int Player::getBank()
{
	return bank;
}

bool Player::getIsBankrupt()
{
	return isBankrupt;
}

void Player::declareBankruptcy()
{
	cout << "you shout, into the woods: I DECLARE BANKRUPTCY!\nthe animals are unimpressed, and you are broke\n";
	isBankrupt = true;
}

void Player::setNewProperty(int position)
{
	properties[position] = 1;
}


