#include <stdio.h>

int main()
{
	int a[10] = { 0 };

	printf("%zu\n", sizeof(a));   //40  //array decay olmuyor - istisna
	printf("%zu\n", sizeof(&a[0])); //4

}
