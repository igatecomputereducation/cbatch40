#include<stdio.h>
void igate(int,int);
int main()
{
	int a,b;
	a=10;
	b=20;
	igate(a,b);
	printf("%i\n%i",a,b);
	return 0;
}
void igate(int p,int q)
{
	p=p+5;
	q=q+5;	
}
