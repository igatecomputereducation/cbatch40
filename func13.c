#include<stdio.h>
int box(int,int,int);
int main()
{
	int b,w,h,v;
	printf("Enter 3 sides of a box\n");
	scanf("%i%i%i",&b,&w,&h);
	v=box(b,w,h);
	printf("Volume of box %i",v);
	return 0;
}
int box(int p,int q,int r)
{
	return p*q*r;
}
