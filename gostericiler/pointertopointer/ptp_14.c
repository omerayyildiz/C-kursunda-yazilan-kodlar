#include <stdio.h>
#include <string.h>
#include "array.h"
#include "nutility.h"

void print_names(char*const * ptr, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		printf("%s ", ptr[i]);
	}
	dline();
}

void sort_names(char** ptr, size_t size)
{
	for (size_t i = 0; i < size - 1; ++i) {
		for (size_t k = 0; k < size - 1 - i; ++k) {
			if (strcmp(ptr[k], ptr[k + 1]) > 0) {
				char* ptemp = ptr[k];
				ptr[k] = ptr[k + 1];
				ptr[k + 1] = ptemp;
			}
		}
	}
}

int main()
{
	char* p[] = {
		"kamil", "korhan", "beril", "turhan", "ufuk", "murathan", "figen", "malik", "bulent", "cengiz",
		"baran", "nurullah", "dilber", "tuncer", "recep", "pelinsu", "cihan", "yesim", "aziz", "kazim",
		"afacan", "tevfik", "sumeyye", "hande", "aslihan", "emine", "temel", "gulsah", "hasan", "gul",
		"soner", "ayla", "cuneyt", "tekin", "binnaz", "emrecan", "yasar", "yilmaz", "feraye", "tugra",
		"melek", "garo", "yurdagul", "tarik", "derin", "handan", "aytac", "petek", "cem", "aylin",
		"gursel", "haldun", "nazife", "hulusi", "sevilay", "sabriye", "gulden", "tansel", "ege", "turgut",
		"cahit", "berk", "nazli", "aykut", "kayhan", "cemre", "murat", "kunter", "gunay", "cahide",
		"nedim", "metin", "kerim", "utku", "cumhur", "kurthan", "poyraz", "can", "candan", "hikmet" };

	print_names(p, asize(p));
	sort_names(p, asize(p));
	print_names(p, asize(p));

}
