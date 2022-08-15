#include<stdio.h>
void rectangle(int,int);
int main()
{
	int l,b;
	printf("Length:");
	scanf("%i",&l);
	printf("Breadth:");
	scanf("%i",&b);
	rectangle(l,b);
	return 0;
}
void rectangle(int x,int y)
{
	printf("Area %i\n",x*y);
	printf("Perimeter %i",2*(x+y));
}

