#include<stdio.h>
int x=10;
igate()
{
	x+=2;
}
main()
{
	int i;
	for(i=1;i<=5;i++)
		igate();
	printf("%i",x);
}
