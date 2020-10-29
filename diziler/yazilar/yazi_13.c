#include <stdio.h>

int main()
{
	char str[100] = "nurullah";


	for (int i = 0; str[i] != '\0'; ++i)
		printf("%c", str[i]);

	printf("\n\n");

	for (int i = 0; str[i] != 0; ++i)  //aynı anlamda ama tercih etmiyoruz
		printf("%c", str[i]);

	printf("\n\n");

	for (int i = 0; str[i]; ++i)  //aynı anlamda
		printf("%c", str[i]);
}
