#pragma once


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

