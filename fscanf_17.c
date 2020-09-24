#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	FILE *f;
	int ival, retval;
	char buffer[200];

	if ((f = fopen("dosya17.txt", "r")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	while ((retval = fscanf(f, "%d", &ival)) != EOF) {
		if (retval == 0) {
			fscanf(f, "%s", buffer);
			printf("\n[%s] gecerli bir tam sayi degil\n", buffer);
		}
		else {
			printf("%d ", ival);
		}
	}

	fclose(f);
}
