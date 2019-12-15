#pragma once
#include<iostream>
#include<array>
#include "Player.h"

#ifndef SPACE_H
#define SPACE_H
class Space
{
public:
	Space(int position, std::string name, array<Player, 6> players);
	std:: string printTile(int line);
private:
	int position;
	std::string name;
	array<Player, 6> players;

};

#endif