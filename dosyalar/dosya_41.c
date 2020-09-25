// binary olarak rastgele kayit dosyasi olusturan program
// buradan üretilen dosyalar diğer örneklerde test amaçlı kullanılabilir.
// person.h ve nutility.h dosyalari common isimli dizinde

// dkayit  kayitlar.txt    20000

#include <stdio.h>
#include <stdlib.h>  //atoi
#include "person.h"
#include "nutility.h"

int main(int argc, char **argv)
{
	FILE* f;
	int nrec;
	Person per;

	if (argc != 3) {
		fprintf(stderr, "kullanim : <perfile> <kayit sayisi>");
		return 1;
	}

	if ((f = fopen(argv[1], "wb")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", argv[1]);
		return 1;
	}
	
	nrec = atoi(argv[2]);

	randomize();

	for (int i = 0; i < nrec; ++i) {
		set_random_person(&per);
		fwrite(&per, sizeof(Person), 1, f);
	}

	fclose(f);
}
