#include <stdio.h>

int main()
{
	int x = 10;
	int* p = &x;
	int** ptr = &p;

	printf("sizeof(p)   = %zu\n", sizeof(p));
	printf("sizeof(ptr) = %zu\n", sizeof(ptr));
}
