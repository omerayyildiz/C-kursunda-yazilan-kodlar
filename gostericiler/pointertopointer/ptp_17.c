#include <stdio.h>

void foo(int** p1, int** p2)
{
	int a = **p1;
	**p1 = **p2;
	**p2 = a;
}

int main()
{
	int x = 13;
	int y = 34;
	int* p1 = &x;
	int* p2 = &y;

	printf("x = %d y = %d\n", x, y);
	foo(&p1, &p2);

	printf("x = %d y = %d\n", x, y);
}
