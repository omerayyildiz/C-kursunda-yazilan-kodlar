#include <stdio.h>

int x;

int main()
{
	int y;
	int* ptr = &x;

	y = *ptr + 5;  //y = 5 hata yok

}
