#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[SIZE];
	int len = 0;

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	for (int i = 0; str[i] != '\0'; ++i)
		++len;

	printf("[%s] yazisinin uzunlugu %d\n", str, len);

}
