// Chapter 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "header.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	//ValidateUnsignedOutput();

	//PrintingWithEscapeSequences();

	//ChangeValueOfPointer();

	DoublePointers();

	cin.clear(); // reset any error flags
	cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	cin.get(); // get one more char from the user
	return 0;
}

