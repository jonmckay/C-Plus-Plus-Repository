#include "stdafx.h"
#include "Sales_item.h"

int addTwoSalesItemObjects()
{
	Sales_item obj1, obj2;

	std::cout << "Enter the information for two Sales_item objects (e.g. 0-201-78345-X 3 20.00)" << std::endl;

	std::cin >> obj1;
	std::cin >> obj2;

	std::cout << "The sum of those objects is: " << obj1 + obj2 << std::endl;

	return 0;
}