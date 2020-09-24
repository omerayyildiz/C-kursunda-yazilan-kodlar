#include <stdio.h>

//ilk 1'000'000 asal sayiyi bir text dosyasina yaziniz
//dosya ismi asal.txt

int isprime(int val)
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

int main()
{
	FILE *f;
	int prime_count = 0;
	int ival;

	if ((f = fopen("asal.txt", "w")) == NULL) {
		fprintf(stderr, "dosya olusturulamadi\n");
		return 1;
	}

	ival = 2;
	while (prime_count < 1000000) {  
		if (isprime(ival)) {
			if (prime_count && prime_count % 10 == 0)
				fprintf(f, "\n");
			fprintf(f, "%-12d ", ival);
			++prime_count;
		}
		++ival;
	}

	fclose(f);
}
