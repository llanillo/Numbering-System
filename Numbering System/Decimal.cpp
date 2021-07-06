#include <iostream>
#include "Decimal.h"

void Decimal::ToBinary(float number)
{
	int32_t copy, remainder;
	int32_t counter = 1, sum = 0;
	copy = number;

	while (copy != 0) {
		remainder = copy % 2;

		sum = remainder * counter + sum;
		std::cout << copy << "/" << "2" << "; " << "Remainder = " << remainder << std::endl;
		counter *= 10;
		copy /= 2;
	}

	float wholeNumber = floor(number);

	if (wholeNumber == number)
		std::cout << "Binary number: " << sum << std::endl;

	else {
		float decimalPart = number - wholeNumber;
		float copy = decimalPart;
		float decimalSum = 0;
		int32_t aux = 1;

		while (ceil(copy) != floor(copy) && counter < 30) {
			copy *= 2;
			decimalSum = decimalSum + ceil(copy) / aux;

			aux /= 10;
		}
	}
}

void Decimal::ToOctal(int number)
{
}

void Decimal::ToHexadecimal(int number)
{
}
