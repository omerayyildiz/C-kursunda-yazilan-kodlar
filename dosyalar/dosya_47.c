#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//standart fread ve fwrite fonksiyonları ile bir dosyanin kopyasi olusturuluyor
//kopyala ali.exe veli.exe

#define			BUFFER_SIZE				1000


int main(int argc, char** argv)
{
	FILE* fs, * fd;
	char buffer[BUFFER_SIZE];
	size_t n;
	size_t byte_count = 0;

	if (argc != 3) {
		fprintf(stderr, "kullanim: <kopyala> <kaynak dosya ismi> <hedef dosya ismi>\n");
		return 1;
	}

	if ((fs = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", argv[1]);
		return 2;
	}

	if ((fd = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", argv[2]);
		fclose(fs);
		return 3;
	}

	while ((n = fread(buffer, 1, BUFFER_SIZE, fs)) != 0) {
		fwrite(buffer, 1, n, fd);
		byte_count += n;
	}

	fclose(fs);
	fclose(fd);

	printf("%zu byte'lik %s dosyasinin %s isimli kopyasi olusturuldu\n", byte_count, argv[1], argv[2]);
}
