#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[100] = "serkan";
	char s[100];
	size_t n;

	printf("kac karakter kopyalansin: ");
	scanf("%zu", &n);

	strncpy(s, str, n)[n] = '\0';

	printf("%s", s);
}
