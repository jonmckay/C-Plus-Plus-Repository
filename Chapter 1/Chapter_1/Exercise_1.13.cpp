#include <iostream>



int Exercise_1_13_1()
{
	int sum = 0;
	// keep executing the while as long as val is less than or equal to 10
	for (size_t val = 0; val <= 10; val++)
	{
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}


