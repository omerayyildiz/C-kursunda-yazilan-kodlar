int main()
{
	int x = 10;
	int a[] = { 1, 2, 3 };
	int* ptr = &x;

	*ptr; //gecerli
	*a;  //gecerli
	*&x; //gecerli
	*(&x); //gecerli

}
