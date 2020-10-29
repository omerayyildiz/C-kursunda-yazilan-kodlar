#include <stdio.h>

int main()
{
	char str[20] = { 'M', 'E', 'R', 'T' }; //null karakter var

	for (int i = 0; str[i] != '\0'; ++i) //sorun yok
		printf("%c", str[i]);
}
