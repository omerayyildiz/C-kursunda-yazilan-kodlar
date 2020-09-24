//dosyadaki harf karakterleri (ASCII sayiliyor)
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *f;
	int c;
	int counters[26] = { 0 };

	if (argc != 2) {
		fprintf(stderr, "kullanim : <hsay> <dosya ismi>\n");
		return 1;
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", argv[1]);
		return 2;
	}

	while ((c = fgetc(f)) != EOF) {
		if (isalpha(c)) {
			++counters[toupper(c) - 'A'];
		}
	}

	fclose(f);

	for (int i = 0; i < 26; ++i) {
		if (counters[i]) {
			printf("%c %d\n", 'A' + i, counters[i]);
		}
	}
}
