#include <stdio.h>

int main()
{
	FILE *f;
	int x;

	if ((f = fopen("asal1000.txt", "r")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	while (fscanf(f, "%d", &x) != EOF) {
		printf("%d ", x);
	}

	fclose(f);
}
