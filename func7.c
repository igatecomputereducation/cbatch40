#include<stdio.h>
int x=40;
igate()
{
	printf("%i\n",x);
	x+=5;
}
main()
{
	printf("%i\n",x);
	x+=5;
	igate();
	printf("%i\n",x);
}
