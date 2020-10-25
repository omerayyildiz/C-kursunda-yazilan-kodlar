#include <string.h>
#include <stdio.h>

int main()
{
	char s1[100] = "ABCDEFGH";
	char s2[100] = "012345";

	strncat(s2, s1, 5);

	printf("[%s]\n", s2);
}
