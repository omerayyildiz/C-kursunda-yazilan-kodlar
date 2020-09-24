#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


int main()
{
	FILE *fd[asize(ptowns)];
	FILE *fs;
	char fname[40];
	int no, grade;
	char name[40], surname[40], town[40];


	if ((fs = fopen("kayitlar.txt", "r")) == NULL) {
		fprintf(stderr, "dosya acilamadi\n");
		return 1;
	}

	for (size_t i = 0; i < asize(ptowns); ++i) {
		//sprintf(temp, "%s.txt", ptowns[i]);
		strcat(strcpy(fname, ptowns[i]), ".txt");
		if ((fd[i] = fopen(fname, "w")) == NULL) {
			fprintf(stderr, "%s dosyasi olusturulamadi\n", fname);
			return 1;
		}
	}

	while (fscanf(fs, "%d%s%s%s%d", &no, name, surname, town, &grade) != EOF) {
		size_t i;
		for (i = 0; i < asize(ptowns) && strcmp(ptowns[i], town); ++i)
			;

		assert(i != asize(ptowns));
		fprintf(fd[i], "%-8d%-18s%-20s%-16s%d\n", no, name, surname, town, grade);
	}

	printf("%d dosya kapatildi\n", _fcloseall());
}
