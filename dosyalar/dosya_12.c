#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *f;
	int c;

	if ((f = fopen("dosya15.txt", "r")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	while ((c = fgetc(f)) != EOF) {
		if (ispunct(c)) {  //burada dilediginiz test fonksiyonunu cagirin
			putchar(c);
		}
	}

	fclose(f);
}
