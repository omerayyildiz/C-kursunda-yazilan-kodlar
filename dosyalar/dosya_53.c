//standart ftell islevi kullanilarak bir dosyanin kac byte
// oldugu yazdiriliyor
//dbyte ali.exe

#include <stdio.h>


int main(int argc, char **argv)
{
	FILE* f;

	if (argc != 2) {
		fprintf(stderr, "kullanim: <dbyte> <dosya ismi>\n");
		return 1;
	}

	if ((f = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamiyor\n", argv[1]);
		return 2;
	}

	fseek(f, 0L, SEEK_END);

	printf("%ld\n", ftell(f));
	fclose(f);
}
