#include <string.h>
#include <stdio.h>

int main()
{
	char s1[] = "necatiersan";
	char s2[] = "muhittinersoy";

	if (!strncmp(s1 + 6, s2 + 8, 3))
		printf("evet esit\n");
	else
		printf("hayir esit degil\n");
}
