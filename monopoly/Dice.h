#pragma once
#ifndef dice_h
#define dice_h

class Dice
{
public:
	static int rollDie(int& min, int& max);
	static int rollDie(int min, int max);
	static int rollDie();
};

#endif