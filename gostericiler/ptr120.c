#include <stdio.h>
#include "nutility.h"

#define			SIZE		20

void get_min_max(const int* pa, int size, int* pmax, int* pmin)
{
	*pmax = *pmin = *pa;

	for (int i = 0; i < size; ++i) {
		if (pa[i] > * pmax)
			*pmax = pa[i];
		else if (pa[i] < *pmin)
			*pmin = pa[i];
	}
}


int main()
{
	int a[SIZE];
	int min, max;

	randomize();
	set_random_array(a, SIZE);
	print_array(a, SIZE);

	get_min_max(a, SIZE, &max, &min);

	printf("min = %d\n", min);
	printf("max = %d\n", max);

}
