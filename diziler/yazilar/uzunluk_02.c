#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[SIZE];
	int len;

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	for (len = 0; str[len] != '\0'; ++len)
		;

	printf("[%s] yazisinin uzunlugu %d\n", str, len);

}
