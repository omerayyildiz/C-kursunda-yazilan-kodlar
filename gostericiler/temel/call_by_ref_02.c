#include <stdio.h>

void scanint(int* ptr)
{
	int ch;
	*ptr = 0;

	while ((ch = getchar()) != '\n') {
		*ptr = *ptr * 10 + ch - '0';
	}
}


int main()
{
	int x;

	printf("bir sayi giriniz: ");
	scanint(&x);

	printf("x = %d\n", x);
}
