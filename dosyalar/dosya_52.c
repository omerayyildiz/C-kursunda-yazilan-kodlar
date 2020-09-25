// fseek fonksiyonu için yazılan örnek kod

#include <stdio.h>

int main()
{
	FILE* f;
	int n;
	int ival;

	if ((f = fopen("primes100000.dat", "rb")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	for (int i = 0; i < 10; ++i) {
		printf("kacinci asal sayi: ");
		scanf("%d", &n);
		fseek(f, (n - 1) * (long)sizeof(int), SEEK_SET);
		fread(&ival, sizeof(int), 1, f);
		printf("%d. asal sayi %d\n", n, ival);
	}

	fclose(f);
}
