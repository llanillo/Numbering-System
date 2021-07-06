#pragma once

#include <string>
#include <map>

class Hexadecimal {
public:
	void ToDecimal(std::string number);

private:
	void CreateMap(std::map<char, int32_t>* map);
};
