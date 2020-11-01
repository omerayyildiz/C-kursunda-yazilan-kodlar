#include <stdio.h>

void pswap(int** ptr1, int** ptr2)
{
	int* ptemp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = ptemp;
}

int main()
{
	int x = 10;
	int y = 35;
	int* p1 = &x, * p2 = &y;

	printf("*p1 = %d   *p2 = %d\n", *p1, *p2);

	pswap(&p1, &p2);

	printf("*p1 = %d   *p2 = %d\n", *p1, *p2);
}
