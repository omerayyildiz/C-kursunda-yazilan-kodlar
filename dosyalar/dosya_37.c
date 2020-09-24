#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *f;
	int no, grade;
	char name[40], surname[40], town[40];

	if ((f = fopen("kayitlar.txt", "r")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	while (fscanf(f, "%d%s%s%s%d", &no, name, surname, town, &grade) != EOF) {
		printf("%-8d%-18s%-20s%-16s%d\n", no, name, surname, town, grade);
	}

	fclose(f);
}
