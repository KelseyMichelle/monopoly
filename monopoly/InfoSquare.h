#pragma once

#ifndef INFOSQUARE_H
#define INFOSQUARE_H
#include <string>

class InfoSquare {
public:
	InfoSquare();
	std::string getLine(int line);
private:
	std::string lineOne();
	std::string lineTwo();
	std::string propertyLine(int line);
	
};

#endif