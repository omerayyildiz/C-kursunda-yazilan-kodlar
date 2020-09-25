//fread fonksiyonu ile okuma işlemi

#include <stdio.h>
#include "person.h"

int main()
{
	FILE* f;
	Person per;
	int day, mon;

	if ((f = fopen("per1000.dat", "rb")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	printf("gun ve ay degerlerini girin: ");
	scanf("%d%d", &day, &mon);


	while (fread(&per, sizeof(per), 1, f)) {
		if (per.bdate.day == day && per.bdate.mon == mon) {
			print_person(&per);
		}
	}

	fclose(f);
}
