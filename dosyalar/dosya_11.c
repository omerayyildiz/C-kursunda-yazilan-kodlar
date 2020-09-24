#include <stdio.h>

int main()
{
	FILE *f = fopen("chars.txt", "w");

	if (f == NULL) {
		printf("dosya olusturulamadi\n");
		return 1;
	}

	for (int i = 'A'; i <= 'Z'; ++i) {
		fputc(i, f);
	}

	fputc('\n', f);

	for (int i = 'a'; i <= 'z'; ++i) {
		fputc(i, f);
	}
	fputc('\n', f);

	for (int i = '0'; i <= '9'; ++i) {
		fputc(i, f);
	}

	fputc('\n', f);

	fclose(f);
}
