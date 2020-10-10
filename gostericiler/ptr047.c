#include <stdio.h>

void iswap(int* p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int x = 10, y = 23;

	printf("x = %d  y = %d\n", x, y);
		
	iswap(&x, &y);
	
	printf("x = %d  y = %d\n", x, y);
}
