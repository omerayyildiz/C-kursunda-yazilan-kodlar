#define			BUFFER_SIZE		100


int main()
{
	time_t timer;
	struct tm* tptr;
	char buffer[BUFFER_SIZE];
	char* p;

	p = setlocale(LC_ALL, "portuguese");
	if (p == NULL) {
		printf("locale degistirilemedi\n");
		return 1;
	}
	printf("locale degistirildi yeni locale [%s]\n", p);
	time(&timer);
	tptr = localtime(&timer);

	strftime(buffer, BUFFER_SIZE, "%A %B %Y", tptr);

	puts(buffer);
}
