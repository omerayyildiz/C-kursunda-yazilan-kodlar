#include <stdio.h>

#define eprintf(...) fprintf (stderr, __VA_ARGS__)

int main()
{
	eprintf("%s dosyasinin %d. satirinda hata!\n", __FILE__, __LINE__);
}
