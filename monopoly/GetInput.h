#pragma once


#ifndef GETINPUT_H
#define GETINPUT_H
#include <string>
#include <vector>
class GetInput
{
public:
	static int getInt(std::string query);
	static int getInt(std::string query, int min, int max);
	static int getString(std::string query);
	static int getString();
	static int getString(std::string query, std::vector<std::string> options);

};

#endif