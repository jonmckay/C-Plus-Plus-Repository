#include <iostream>

int Exercise_1_9()
{
	auto i = 100;
	auto n = 0;
	while (i > 50)
	{
		n += i;
		i--;
	}
	int v1;
	std::cout << n << std::endl;
	std::cin >> v1;
}