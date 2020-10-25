void f3(int y)
{
	y *= 10;
}

void f2(int* p)
{
	*p *= 5;
}

void f1(int* p)
{
	f2(p);
	f3(*p);
}

int main()
{
	int x = 10;

	f1(&x);

	printf("x = %d\n", x);
}
