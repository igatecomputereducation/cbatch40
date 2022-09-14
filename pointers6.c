#include<stdio.h>
void rectangle(int,int,int*,int*);
int main()
{
	int len,bre,area,peri;
	printf("Length:");
	scanf("%i",&len);
	printf("Breadth:");
	scanf("%i",&bre);
	rectangle(len,bre,&area,&peri);	
	printf("Area %i\n",area);
	printf("Perimeter %i",peri);
	return 0;
}
void rectangle(int l,int b,int *a,int *p)
{
	*a=l*b;
	*p=2*(l+b);
}
