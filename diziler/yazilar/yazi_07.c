#include <stdio.h>

//C++ dilinde bu kod sentaks hatası
//warning C4295: 'str': array is too small to include a terminating null character

int main()
{
	char str[4] = "berk";  //null karakter yok

	for (int i = 0; str[i] != '\0'; ++i) //tanimsiz davranis
		printf("%c", str[i]);
}
