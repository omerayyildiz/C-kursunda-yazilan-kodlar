// pointer türleri için bellek alanı (storage) ihtiyacı sistemde sabittir.
// pointer türleri için sizeof değeri derleyiciye bağlı olarak 2, 4 ya da 8 byte olabilir.

#include <stdio.h>

int main()
{
	printf("sizeof(char)           = %zu\n", sizeof(char));
	printf("sizeof(char *)         = %zu\n", sizeof(char*));
	printf("sizeof(short)          = %zu\n", sizeof(short));
	printf("sizeof(short *)        = %zu\n", sizeof(short*));
	printf("sizeof(int)            = %zu\n", sizeof(int));
	printf("sizeof(int *)          = %zu\n", sizeof(int*));
	printf("sizeof(float*)         = %zu\n", sizeof(float));
	printf("sizeof(int *)          = %zu\n", sizeof(int*));
	printf("sizeof(double)         = %zu\n", sizeof(double));
	printf("sizeof(double *)       = %zu\n", sizeof(double*));
}
