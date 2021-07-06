#pragma once

#include <iostream>

class Binary
{
public:
	int32_t number;
	const int32_t base = 2;

	void ToDecimal(int binary);
	void ToOctal(int binary);
};