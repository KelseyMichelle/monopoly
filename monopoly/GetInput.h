#pragma once
#include <string>
#include <vector>



class GetInput
{
public:
	static int getInt(std::string query);
	static int getInt(std::string query, int min, int max);
	static std::string getString(std::string query);
	static std::string getString();
	static std::string getString(std::string query, std::vector<std::string> options);
	static bool getYesNo(std::string query); // return true if yes
};

