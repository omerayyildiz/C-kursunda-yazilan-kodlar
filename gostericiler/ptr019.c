#include <stdio.h>

int main()
{
	int x = 10;
	int* p1 = &x;
	int* p2 = p1;

	printf("%p  %p %p\n", p1, p2, &x);

}
