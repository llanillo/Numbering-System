#include <iostream>
#include <math.h>
#include <string>
#include <map>
#include "Hexadecimal.h"

typedef std::pair<char, int32_t> values;

void Hexadecimal::ToDecimal(std::string number)
{
	int32_t remainder;
	int32_t sum = 0, counter = 0;

	std::string copy;
	std::map <char, int32_t> map;

	copy = number;

	this->CreateMap(&map);

	while (copy.size() != 0) {
		char lastChar = copy.back();
		if (isdigit(lastChar)) {
			remainder = lastChar - '0'; // Turns the char value to int value
			sum = sum + remainder * pow(16, counter);
		}

		else {
			lastChar = toupper(lastChar);
			remainder = map[lastChar];
			sum = sum + remainder * pow(16, counter);
		}

		std::cout << " + " << remainder << "*" << 16 << "^" << counter;

		counter++;
		copy = copy.substr(0, copy.length() - 1);
	}
	std::cout << " = " << sum;
}

void Hexadecimal::CreateMap(std::map<char, int32_t>* map)
{
	map->insert(values('A', 10));
	map->insert(values('B', 11));
	map->insert(values('C', 12));
	map->insert(values('D', 13));
	map->insert(values('E', 14));
	map->insert(values('F', 15));
}
