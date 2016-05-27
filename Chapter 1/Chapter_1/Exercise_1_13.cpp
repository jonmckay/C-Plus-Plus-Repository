#include "stdafx.h"

int incrementWithForLoop()
{
	auto i = 100;
	auto n = 0;

	for (auto i = 100; i > 50; i--)
	{
		n += i;
	}
	int v1;
	std::cout << n << std::endl;

	std::cin >> v1;
	return 0;
}