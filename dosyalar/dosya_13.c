//komut satirindan calistirilan ve bir text dosyasini yazdiran program
//yaz ali.txt

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	int c;

	if (argc != 2) {
		fprintf(stderr, "kullanim: <yaz> <dosya ismi>\n");
		return 1;
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", argv[1]);
		return 2;
	}

	while ((c = fgetc(f)) != EOF) {
		putchar(c);
	}

	fclose(f);
}
