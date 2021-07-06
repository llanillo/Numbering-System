// Binarios.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include "Binary.h"

void Binary::ToDecimal(int binary)
{
	int32_t remainder = 0, sum = 0, counter = 0;
	number = binary;

	while (number != 0) {
		remainder = number % 10;
		//std::cout << " + " << remainder << "*" << 8 << "^" << counter;		
		sum += remainder * pow(2, counter);
		counter++;
		number /= 10;
	}

	std::cout << "Binary: " << binary << " Decimal: " << sum;
}

void Binary::ToOctal(int binary) {

}