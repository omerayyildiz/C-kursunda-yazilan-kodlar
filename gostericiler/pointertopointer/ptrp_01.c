#include <stdio.h>


int main()
{
	int x = 10;
	int* ptr = &x;

	printf("&x      = %p\n", &x);
	printf("ptr     = %p\n", ptr);
	printf("&ptr    = %p\n", &ptr);

}
