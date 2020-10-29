#define _CRT_SECURE_NO_WARNINGS

#define   SIZE				100

int main()
{
	char name[SIZE];

	printf("bir isim girin: ");
	scanf("%s", name); //hasan

	//yazinin sonuna can sozcugunu ekleyin
	printf("[%s]\n", name);

	int i;

	for (i = 0; name[i] != '\0'; ++i) {}

	name[i] = 'c';
	name[i + 1] = 'a';
	name[i + 2] = 'n';
	name[i + 3] = '\0';

	printf("[%s]\n", name);
}
