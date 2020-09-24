#define _CRT_SECURE_NO_WARNINGS

//bolunmus parcalari birlestiren program

#include <stdio.h>
#include <stdlib.h>

#define			MAX_NAME_LEN		80


//bir  mehmet.exe

int main(int argc, char **argv)
{
	FILE *fs, *fd;
	int file_count = 0;
	int byte_count = 0;
	int c;
	char source_file_name[MAX_NAME_LEN + 1];

	if (argc != 2) {
		fprintf(stderr, "kullanim <bir> <hedef dosya ismi>\n");
		return 1;
	}

	if ((fd = fopen(argv[1], "wb")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", argv[1]);
		return 2;
	}

	for (;;) {
		sprintf(source_file_name, "parca%03d.par", file_count + 1);
		if ((fs = fopen(source_file_name, "rb")) == NULL)
			break;
		while ((c = fgetc(fs)) != EOF) {
			fputc(c, fd);
			++byte_count;
		}
		++file_count;
		fclose(fs);
	}

	fclose(fd);

	for (int i = 1; i <= file_count; ++i) {
		sprintf(source_file_name, "parca%03d.par", i);
		if (remove(source_file_name)) {
			fprintf(stderr, "%s dosyasi silinemedi\n", source_file_name);
			return 3;
		}
	}

	printf("%d adet dosya %d  byte'lik %s dosyasi olarak birlestirildi\n", file_count, byte_count, argv[1]);
}
