#include <iostream>
#include "Binary.h"

int main() {
	int n;
	Binary binaryClass;
	std::cout << "Insert a binary number to convert into decimal number" << std::endl;
	std::cin >> n;
	binaryClass.ToDecimal(n);
	return 0;
}
