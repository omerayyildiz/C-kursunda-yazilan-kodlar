#include <stdio.h>

#define  MAX_NAME_LENGTH    80

int main()
{
	FILE *f;
	char file_name[MAX_NAME_LENGTH + 1];

	printf("olusturulacak dosyanin ismini girin: ");
	scanf("%s", file_name);

	if ((f = fopen(file_name, "w")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", file_name);
		return 1;
	}

	printf("%s dosyasi olusuturldu\n", file_name);
}
