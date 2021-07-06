#include "Extras.h"
#include <iostream>

bool Extras::IsPalindromeNumber(int number)
{
	int32_t sum = 0;
	int32_t remainder, copy;

	copy = number;

	while (copy != 0) {
		remainder = copy % 10;
		sum = (sum * 10) + remainder;
		copy /= 10;
		std::cout << "Copy: " << copy << " Remainder: " << remainder << " Sum: " << sum << std::endl;
	}

	if (sum == number)
		return true;
	else
		return false;
}

void Extras::NumberSize(__int32* number)
{
	__int32 counter = 0;

	while (*number != 0) {
		*number /= 10;
		counter++;
		std::cout << "Counter: " << counter << " number: " << *number << std::endl;
	}

	*number = counter;
}

