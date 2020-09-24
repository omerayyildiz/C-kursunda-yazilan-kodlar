#include <stdio.h>

#define  MAX_NAME_LENGTH    80

int main()
{
	FILE *f;
	char file_name[MAX_NAME_LENGTH + 1];

	printf("acilacak dosyanin ismini girin: ");
	scanf("%s", file_name);

	if ((f = fopen(file_name, "r")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", file_name);
		return 1;
	}

	printf("%s dosyasi okuma modunda acildi\n", file_name);
	//...
}
