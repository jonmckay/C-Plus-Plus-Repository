#include "stdafx.h"

int productTwoNums()
{
	int v1, v2;
	std::cin >> v1 >> v2;

	std::cout << "The product of " << v1 << " and " << v2 << " is: " << v1 * v2 << std::endl;

	std::cin >> v1;

	return 0;
}