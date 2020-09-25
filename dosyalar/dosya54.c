#include <stdio.h>

void print_eof_flag(FILE *f)
{
	if (feof(f))
		printf("eof bayragi set edilmis\n");
	else
		printf("eof bayragi set edilmemis\n");
}

int main()
{
	FILE *f = fopen("person.h", "r");

	if (!f) {
		printf("acilamadi\n");
		return 1;
	}

	print_eof_flag(f);

	fseek(f, 0L, SEEK_END);

	print_eof_flag(f);

	fgetc(f); //burada okuma basarisiz olacak ve fgetc EOF dödürecek
	
	print_eof_flag(f);
	
	fseek(f, 0L, SEEK_END); //eof bayragi clear edilecek

	print_eof_flag(f);
}
