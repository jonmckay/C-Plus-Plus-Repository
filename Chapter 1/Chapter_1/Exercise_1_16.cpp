#include "stdafx.h"

int sumOfNumbers()
{
	int v1, v2;

	std::cout << "Enter two numbers" << std::endl;

	// Read two numbers in
	std::cin >> v1;
	std::cin >> v2;

	// Use << instead of + to concatenate strings into one line
	std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << std::endl;
	
	return 0;
}