#include "stdafx.h"

int compilationErrors()
{
	// error: used colon, not a semicolon, after endl (Expected ;)
	std::cout << "Read each file." << std::endl;

	// error: missing quotes around string literal (Undeclared identifier)
	std::cout << "Update master." << std::endl;

	// error: second output operator is missing
	std::cout << "Write new master." << std::endl;

	// error: missing ; on return statement
	return 0;
}