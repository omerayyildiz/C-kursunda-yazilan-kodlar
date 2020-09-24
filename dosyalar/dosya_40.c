#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define  asize(x)			(sizeof(x) / sizeof(*x))


static const char* const ptowns[] = {
"izmir", "afyonkarahisar", "kilis", "bolu", "yalova", "giresun", "tunceli", "manisa", "cankiri", "canakkale",
"mugla", "isparta", "ankara", "kahramanmaras", "nigde", "kirklareli", "artvin", "kirikkale", "bursa", "bingol",
"sirnak", "erzincan", "gaziantep", "bayburt", "tekirdag", "kocaeli", "trabzon", "ardahan", "elazig", "karabuk",
"samsun", "malatya", "aksaray", "van", "kars", "amasya", "kirsehir", "balikesir", "eskisehir", "sanliurfa",
"adiyaman", "mardin", "bilecik", "hakkari", "mus", "kayseri", "agri", "sinop", "istanbul", "mersin",
"aydin", "sivas", "yozgat", "igdir", "sakarya", "burdur", "antalya", "osmaniye", "konya", "tokat",
"zonguldak", "corum", "batman", "adana", "usak", "denizli", "edirne", "karaman", "ordu", "diyarbakir",
"siirt", "kutahya", "bitlis", "bartin", "nevsehir", "rize", "kastamonu", "duzce", "erzurum", "gumushane",
"hatay", };


void create_town_file(const char *ptown, const char *psource_file)
{
	FILE *fs, *fd;
	static char file_name[40];
	int no, grade;
	char name[40], surname[40], town[40];

	if ((fs = fopen(psource_file, "r")) == NULL) {
		fprintf(stderr, "%s dosyasi acilamadi\n", psource_file);
		exit(EXIT_FAILURE);
	}

	sprintf(file_name, "%s.txt", ptown);

	if ((fd = fopen(file_name, "w")) == NULL) {
		fprintf(stderr, "%s dosyasi olusturulamadi\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (fscanf(fs, "%d%s%s%s%d", &no, name, surname, town, &grade) != EOF) {
		if (!strcmp(town, ptown))
			fprintf(fd, "%-8d%-18s%-20s%-16s%d\n", no, name, surname, town, grade);
	}

	fclose(fs);
	fclose(fd);
}



int main()
{
	for (size_t i = 0; i < asize(ptowns); ++i)
		create_town_file(ptowns[i], "kayitlar.txt");
}
