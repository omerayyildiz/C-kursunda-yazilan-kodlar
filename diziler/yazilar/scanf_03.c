#include <stdio.h>

int main()
{
	char name[40];
	char surname[40];
	char town[40];
	int age;

	printf("isim soyisim sehir ve yas giriniz: ");
	scanf("%s%s%s%d", name, surname, town, &age);
	printf("%d yasindaki %s ilinde mukim %s %s\n", age, town, name, surname);
}
