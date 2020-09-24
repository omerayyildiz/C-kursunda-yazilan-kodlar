#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//rastgele text dosyasi olusturuyoruz

// crtf ahmet.txt  10000  40   60

int get_random_char(void)
{
	int c;

	while (!isalnum(c = rand() % 128))
		;

	return c;
}

int main(int argc, char **argv)
{
	FILE *f;
	int nlines;
	int min_len, max_len;

	srand((unsigned)time(NULL));

	if (argc != 5) {
		fprintf(stderr, "usage: <crt> <file name> <no of line> <min line length> <max line length>\n");
		return 1;
	}

	if ((f = fopen(argv[1], "w")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", argv[1]);
		return 2;
	}

	nlines = atoi(argv[2]);
	min_len = atoi(argv[3]);
	max_len = atoi(argv[4]);

	for (int i = 0; i < nlines; ++i) {
		int line_len = rand() % (max_len - min_len + 1) + min_len;
		for (int k = 0; k < line_len; ++k)
			fputc(get_random_char(), f);
		fputc('\n', f);
	}

	fclose(f);
}
