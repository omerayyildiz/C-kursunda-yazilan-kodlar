#include <stdio.h>

void func(int* ptr)
{
	//ptr'nin degeri x'in adresi
	*ptr = 999;
	//
}

int main()
{
	int y = 67;

	printf("y = %d\n", y);

	func(&y);

	printf("y = %d\n", y);
}
