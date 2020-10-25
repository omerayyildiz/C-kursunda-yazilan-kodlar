// adres operatörünün operandı sol taraf değeri ifadesi (L value expression) olmak zorunda

int main()
{
	int x = 10;
	double dval = 2.3;

	//&10    gecersiz
	//&(x + 5)   gecersiz
 	//&+x   gecersiz
	&x;   //gecerli
	&dval;   //gecerli
  	&(x);   //gecerli
}
