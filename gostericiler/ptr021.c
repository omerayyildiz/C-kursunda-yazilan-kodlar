//array to pointer conversion
//array decay

//a ==> &a[0]

#include <stdio.h>

int main()
{
	int a[10] = { 0 };
	int* ptr = a;
	//int* p;
	//p = a;

	printf("&a[0]   = %p\n", &a[0]);
	printf("a       = %p\n", a);
	printf("ptr     = %p\n", ptr);
}
