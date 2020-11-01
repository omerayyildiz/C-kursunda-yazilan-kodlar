#include <stdio.h>
#include "array.h"


int main()
{
	double x = 1.10;
	double* p = &x;
	double** ptr = &p;

	printf("sizeof(p) = %zu\n", sizeof(p)); //4
	printf("sizeof(*p) = %zu\n", sizeof(*p));  //8
	printf("sizeof(ptr) = %zu\n", sizeof(ptr)); //4
	printf("sizeof(*ptr) = %zu\n", sizeof(*ptr)); //4
}
