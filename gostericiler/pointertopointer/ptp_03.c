int main()
{
	int x = 10;
	int *p = &x;
	int **ptr = &p;
	//...
}


ifade			data type		value category
=========		=========		===============
  x						int							L
  &x					int *						R
  p						int *						L
  *p					int							L
  &p					int**						R
  ptr					int**						L
  *ptr					int*						L
  **ptr					int							L
  &ptr					int***						R
