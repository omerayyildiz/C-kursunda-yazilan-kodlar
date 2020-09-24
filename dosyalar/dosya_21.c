//dosyayi parcalara bolen program

#include <stdio.h>
#include <stdlib.h>

#define			MAX_NAME_LEN		80

//bol  ahmet.exe 1000

int main(int argc, char **argv)
{
	FILE *fs, *fd;
	int file_count = 0;
	int byte_count = 0;
	int chunk;
	int c;
	char dest_file_name[MAX_NAME_LEN + 1];

	if (argc != 3) {
		fprintf(stderr, "kullanim <bol> <dosya ismi> <kac byte>\n");
		return 1;
	}

	if ((fs = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", argv[1]);
		return 2;
	}

	chunk = atoi(argv[2]);
	fd = NULL;

	while ((c = fgetc(fs)) != EOF) {
		if (fd == NULL) { //yeni dosya olusturmali
			sprintf(dest_file_name, "parca%03d.par", file_count + 1);
			if ((fd = fopen(dest_file_name, "wb")) == NULL) {
				fprintf(stderr, "%s dosyasi olusturulamadi\n", dest_file_name);
				return 3;
			}
			++file_count;
		}
		fputc(c, fd);
		++byte_count;
		if (byte_count % chunk == 0) {
			fclose(fd);
			fd = NULL;
		}
	}

	fclose(fs);
	if (fd) {
		fclose(fd);
	}

	printf("%d byte'lik %s dosyasi %d byte'lik %d parcaya bolundu\n", byte_count, argv[1], chunk, file_count);
}
