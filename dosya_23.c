//bir dosyayi sifreleyen program


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
	FILE *fs, *fd;
	char temp_filename[L_tmpnam];
	int c;
	clock_t clock_start, clock_end;

	if (argc != 3) {
		fprintf(stderr, "usage: <enc><file name><key>\n");
		return 1;
	}

	clock_start = clock();

	tmpnam(temp_filename);

	if ((fs = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "file %s cannot opened\n", argv[1]);
		return 2;
	}

	if ((fd = fopen(temp_filename, "wb")) == NULL) {
		fprintf(stderr, "cannot create temporary file\n");
		fclose(fs);
		return 3;
	}

	srand((unsigned)(atoi(argv[2])));

	while ((c = fgetc(fs)) != EOF) {
		fputc(c ^ rand(), fd);
	}

	fclose(fs);
	fclose(fd);

	if (remove(argv[1])) {
		fprintf(stderr, "cannot remove file\n");
		return 4;
	}

	if (rename(temp_filename, argv[1])) {
		fprintf(stderr, "cannot rename file\n");
		return 5;
	}

	clock_end = clock();

	printf("file encrypted duration in %f seconds\n", (double)(clock_end - clock_start) / CLOCKS_PER_SEC);
}
