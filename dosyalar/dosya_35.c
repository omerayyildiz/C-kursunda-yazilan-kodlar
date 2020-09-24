#include <stdio.h>

#define   BUFFER_SIZE      400

int main()
{
	FILE *f;
	int ival, retval;
	char buffer[BUFFER_SIZE];

	if ((f = fopen("asal1000.txt", "r")) == NULL) {
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
