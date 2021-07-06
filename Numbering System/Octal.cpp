#include <iostream>
#include <math.h>
#include "Octal.h"

void Octal::ToDecimal(int32_t octal)
{
	int32_t remainder, number_copy;
	int32_t sum = 0, counter = 0;

	number_copy = octal;

	while (number_copy != 0) {
		remainder = number_copy % 10;
		std::cout << " + " << remainder << "*" << 8 << "^" << counter;
		sum = sum + remainder * pow(8, counter);
		counter++;
		number_copy /= 10;
	}

	std::cout << " = " << sum;
}
