#define _CRT_SECURE_NO_WARNINGS

//ilk n asal sayiyi bir dosyaya yazdiran C programi
//asalyaz  10000
//olusturulacak dosya ismi : prime10000.txt

#include <stdio.h>
#include <stdlib.h>

#define			MAX_FILE_NAME		80

static int isprime(int val)
{
	if (val < 2)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;
}

int main(int argc, char **argv)
{
	FILE *f;
	int ival = 2;
	int prime_counter = 0;
	char file_name[MAX_FILE_NAME + 1];
	int nprime;

	if (argc != 2) {
		fprintf(stderr, "kullanim : <asalyaz> <tamsayi>\n");
		return 1;
	}
	
	nprime = atoi(argv[1]);

	sprintf(file_name, "asal_%d.dat", nprime);

	if ((f = fopen(file_name, "wb")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", file_name);
		return 2;
	}

	while (prime_counter < nprime) {
		if (isprime(ival)) {
			fwrite(&ival, sizeof(int), 1, f);
			++prime_counter;
		}
		++ival;
	}

	fclose(f);
}
