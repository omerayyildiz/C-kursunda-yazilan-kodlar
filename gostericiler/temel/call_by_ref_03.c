#include <stdio.h>

void wrongswap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 45;

	wrongswap(x, y);

	printf("x = %d   y = %d\n", x, y);
}
