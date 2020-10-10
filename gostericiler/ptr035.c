#include <stdio.h>

int main()
{
	int x;
	int y;
	int* ptr = &x;

	y = *ptr + 5; //ub

}
