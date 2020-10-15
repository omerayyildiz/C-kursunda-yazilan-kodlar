#include <stdio.h>

void rprint(const char* pstr)
{
	size_t i;

	for (i = 0; pstr[i] != '\0'; ++i)
		;

	while (i-- > 0)
		putchar(pstr[i]);
}

int main()
{
	rprint("necati ergin");
}
