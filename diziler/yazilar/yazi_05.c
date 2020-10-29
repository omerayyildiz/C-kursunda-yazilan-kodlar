#include <stdio.h>

#define			SIZE		40

int main()
{
	char name[SIZE];

	name[0] = 'A';
	name[1] = 'H';
	name[2] = 'M';
	name[3] = 'E';
	name[4] = 'T';

	//yazinin sonunda null karakter yok

	for (int i = 0; name[i] != '\0'; ++i)  //tanimsiz davranis
		putchar(name[i]);

	putchar('\n');
}
