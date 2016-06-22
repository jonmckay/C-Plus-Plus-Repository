#include "stdafx.h"
using namespace std;

int ChangeValueOfPointer()
{
	int i = 10, j = 5;
	int *p1 = &i;
	*p1 = j;

	cout << *p1 << endl;

	return 0;
}