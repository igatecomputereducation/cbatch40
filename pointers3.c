#include<stdio.h>
int main()
{
	int x;
	int *a;
	x=486;
	a=&x;
	printf("%i\n",x);
	printf("%i\n",*(&x));
	printf("%i",*a);
	return 0;
}
