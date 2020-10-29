#include <stdio.h>

int main()
{
	char str[4] = { 'M', 'E', 'R', 'T' }; //yazinin sonunda null karakter yok

	for (int i = 0; str[i] != '\0'; ++i) //tanimsiz davranis
		printf("%c", str[i]);
}
