int main()
{
	char s1[100] = "nurullah";
	char s2[100];
	
	//s2 = s1;  //gecersiz

	int i;

	for (i = 0; s1[i] != '\0'; ++i)
		s2[i] = s1[i];

	s2[i] = '\0';

}
