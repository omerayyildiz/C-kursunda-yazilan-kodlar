#include <stdio.h>


int main()
{
	int x = 10;
	int y = 56;

	int* p1 = &x;
	int* p2 = &y;

	printf("x = %d\n", x);
	*p1 = *p2;
	//x = y;
	printf("x = %d\n", x);
}
