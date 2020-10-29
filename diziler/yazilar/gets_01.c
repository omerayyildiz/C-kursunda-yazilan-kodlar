#include <stdio.h>

//C11 standartları ile dilden kaldırılan fakat gecmiste cok sık kullanılan ismi gets olan bir std. fonksiyon vardı
// derleyicilerin hemen hepsi halen destekliyor. C11 standartları ile standart kütüphaneye gets_s fonksiyonu eklendi
//gets_s fonksiyonu buffer overflow riski oluşturmuyor

int main()
{
	char name[10];

	printf("bir isim girin: ");
	//gets(name);
	gets_s(name, 10);

	printf("(%s)", name);
}
