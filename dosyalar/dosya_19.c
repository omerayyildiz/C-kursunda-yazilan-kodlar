#include <stdio.h>

typedef struct {
	int ch;
	int cnt;
}Data;

int mycmp(const void *vp1, const void *vp2)
{
	return ((const Data *)vp2)->cnt - ((const Data *)vp1)->cnt;
}

int main(int argc, char *argv[])
{
	FILE *f;
	int c;
	Data counters[26] = { { 'A', 0 }, { 'B', 0 }, { 'C', 0 }, { 'D', 0 }, { 'E', 0 }, { 'F', 0 }, { 'G', 0 }, { 'H', 0 },
	{ 'I', 0 }, { 'J', 0 }, { 'K', 0 }, { 'L', 0 }, { 'M', 0 }, { 'N', 0 }, { 'O', 0 }, { 'P', 0 }, { 'Q', 0 },
	{ 'R', 0 }, { 'S', 0 }, { 'T', 0 }, { 'U', 0 }, { 'V', 0 }, { 'W', 0 }, { 'X', 0 }, { 'Y', 0 }, { 'Z', 0 }, };

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
			++counters[toupper(c) - 'A'].cnt;
		}
	}

	qsort(counters, 26, sizeof(Data), &mycmp);

	fclose(f);

	for (int i = 0; i < 26; ++i) {
		printf("%c   %d\n", counters[i].ch, counters[i].cnt);
	}
}
