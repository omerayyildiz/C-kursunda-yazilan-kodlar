#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[SIZE];
	int i;

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	//yaziyi tersten yazdirin
	printf("%s\n", str);

	for (i = 0; str[i] != '\0'; ++i)
		;

	for (--i; i >= 0; --i)
		putchar(str[i]);

	putchar('\n');
}
