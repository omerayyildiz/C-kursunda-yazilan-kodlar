#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string>

//kopyala	ali.c		veli.c

int main(int argc, char *argv[])
{
	char source_file_name[80];
	char dest_file_name[80];

	if (argc != 3) {
		printf("kaynak dosya ismi: ");
		scanf("%s", source_file_name);
		printf("hedef dosya ismi : ");
		scanf("%s", dest_file_name);
	}
	else {
		strcpy(source_file_name, argv[1]);
		strcpy(dest_file_name, argv[2]);
	}

	//...

	printf("%s dosyasinin %s isimli kopyasi olusturuldu\n", source_file_name, dest_file_name);
}
