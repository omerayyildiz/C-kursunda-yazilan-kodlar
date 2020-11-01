#include <stdio.h>

int main()
{
	int x = 10;
	int y = 35;
	int* p1 = &x, * p2 = &y;

	printf("*p1 = %d   *p2 = %d\n", *p1, *p2);
	//burada p1 ve p2 degiskenlerini takas etmeniz gerekiyor
	//yani takas isleminden sonra p1 y'yi  p2 x'i gostermeli

	int* ptemp = p1;
	p1 = p2;
	p2 = ptemp;

	printf("*p1 = %d   *p2 = %d\n", *p1, *p2);
}
