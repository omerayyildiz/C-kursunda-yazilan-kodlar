#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[SIZE];
	int len;

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	//yaziyi ters ceviriyoruz (reverse)
	printf("[%s]\n", str);

	for (len = 0; str[len] != '\0'; ++len)
		; //null statement

	for (int i = 0; i < len / 2; ++i) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	printf("[%s]\n", str);
}
