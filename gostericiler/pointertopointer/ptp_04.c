#include <stdio.h>
#include "array.h"


int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int* p = a;
	int** ptr = &p;

	(*ptr)[4] = 76;
	print_array(a, 5);
}
