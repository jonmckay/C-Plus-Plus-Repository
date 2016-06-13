#include "stdafx.h"

int printRange()
{
	int v1, v2, i;

	std::cout << "Enter two numbers" << std::endl;

	// Read two values in
	std::cin >> v1;
	std::cin >> v2;

	// Check range of numbers between the two given by user
	for (int i = v1; i < v2; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}