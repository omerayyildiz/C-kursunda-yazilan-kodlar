#include <stdio.h>

void swap(int* p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a[] = { 1, 2, 3 };
	int b[] = { -1, -2, -3 };

	printf("a[0] = %d   b[0] = %d\n", a[0], b[0]);
	swap(a, b);
	//swap(&a[0], &b[0]);
	printf("a[0] = %d   b[0] = %d\n", a[0], b[0]);

}
