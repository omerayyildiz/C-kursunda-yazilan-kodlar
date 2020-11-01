#include <stdio.h>

int main()
{
	int x = 23;
	int y = 57;
	int* p = &x;
	int** ptr = &p;

	printf("*p = %d\n", *p);
	*ptr = &y;  //p = &y;
	printf("*p = %d\n", *p);
}
