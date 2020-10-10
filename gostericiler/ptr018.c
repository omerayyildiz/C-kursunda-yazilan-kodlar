//Bir pointer değerini printf işleviyle yazdırabilirz.
//Kullanılan conversion specifier (%p) Adresin sayısal bileşeni 16'lık sayı sisteminde yazırılır.

include <stdio.h>

int main()
{
	int x = 10;
	int* ptr = &x;

	printf("x         = %d\n", x);
	printf("&x        = %p\n", &x);
	printf("ptr       = %p\n", ptr);
	printf("&ptr      = %p\n", &ptr);

}
