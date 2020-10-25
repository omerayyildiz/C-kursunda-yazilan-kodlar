#include <stdio.h>

int main()
{
	int x = 10, y = 40, z = 90;
	int* ptr;

	ptr = &x;
	*ptr = 99;
	ptr = &y;
	*ptr = 99;
	ptr = &z;
	*ptr = 99;

	printf("%d %d %d\n", x, y, z);
}
