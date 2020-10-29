#include <stdio.h>
#include <ctype.h>

#define			SIZE		100

//ASCII karakter kodlamasi kullaniliyor

int main()
{
	char str[SIZE];
	int counts[26] = { 0 };

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	for (int i = 0; str[i] != '\0'; ++i) {
		if (isalpha(str[i])) {
			++counts[toupper(str[i]) - 'A'];
		}
	}

	for (int i = 0; i < 26; ++i) {
		if (counts[i] != 0) {
			printf("%c   %d\n", 'A' + i, counts[i]);
		}
	}
}
