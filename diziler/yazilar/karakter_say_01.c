#include <stdio.h>

#define			SIZE		100

int main()
{
	char str[SIZE];

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	printf("sayilacak karakteri girin:  ");
	int c = getchar();
	int count = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == c)
			++count;
	}

	printf("[%s] yazisinda [%d] tane [%c] karakteri var\n", str, count, c);
}
