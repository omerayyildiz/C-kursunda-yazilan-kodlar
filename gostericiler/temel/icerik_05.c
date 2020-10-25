#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 4 };
	
	printf("a[0] = %d\n", a[0]);
	*a = 90;
	printf("a[0] = %d\n", a[0]);

}
