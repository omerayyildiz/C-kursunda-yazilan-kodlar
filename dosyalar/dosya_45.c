//Bir dosyanin satirlarini sirali bicimde yazdiran bir C programi

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define			BUFFER_SIZE			1000

int scmp(const void *p1, const void *p2)
{
	return strcmp(*(char *const*)p1, *(char *const*)p2);
}

int main(int argc, char **argv)
{
	FILE *f;
	char **pd;
	int line_cnt = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3) {
		fprintf(stderr, "kullanim: <dsyaz> <dosya ismi>\n");
		return 1;
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", argv[1]);
		return 1;
	}

	pd = NULL;

	while (fgets(buffer, BUFFER_SIZE, f)) {
		char *pcopy = _strdup(buffer);
		pd = (char **)realloc(pd, (line_cnt + 1) * sizeof(char *));
		if (!pd) {
			fprintf(stderr, "bellek yetersiz\n");
			return 2;
		}
		pd[line_cnt++] = pcopy;
	}

	qsort(pd, line_cnt, sizeof(char *), &scmp);

	for (int i = 0; i < line_cnt; ++i) {
		printf("%s", pd[i]);
	}

	for (int i = 0; i < line_cnt; ++i) {
		free(pd[i]);
	}

	free(pd);
}
