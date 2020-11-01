#include <stdio.h>
#include "array.h"
#include "nutility.h"

//öyle bir fonksiyon yazınız ki adresini ve boyutunu aldığı dizinin hem en büyük elemanının adresini
//hem de en küçük elemanının adresini çağıran koda iletsin

// pa: dizinin adresi
// size: dizinin boyutu
// pmin : dizinin en kucuk elemanının adresini tutacak değişkenin adresi
// pmax : dizinin en büyük elemanının adresini tutacak değişkenin adresi

void get_min_max(const int* pa, size_t size, int** pmin, int** pmax)
{
	*pmin = *pmax = (int*)pa;

	for (size_t i = 1; i < size; ++i) {
		if (pa[i] < **pmin) {
			*pmin = (int*)(pa + i);
		}
		else if (pa[i] > * *pmax) {
			*pmax = (int*)(pa + i);
		}
	}
}

#define			SIZE		10

int main()
{
	int a[SIZE];
	int* ptr_min, * ptr_max;

	randomize();
	set_random_array(a, SIZE);
	print_array(a, SIZE);
	get_min_max(a, SIZE, &ptr_min, &ptr_max);

	printf("min = %d ve dizinin %d indisli elemani\n", *ptr_min, ptr_min - a);
	printf("max = %d ve dizinin %d indisli elemani\n", *ptr_max, ptr_max - a);
	swap(ptr_min, ptr_max);

	print_array(a, SIZE);
}
