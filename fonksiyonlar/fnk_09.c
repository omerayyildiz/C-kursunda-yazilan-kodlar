#include <stdio.h>

//call by value

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 45;

	printf("x = %d   y = %d\n", x, y);
	swap(x, y);
	printf("x = %d   y = %d\n", x, y);
}
