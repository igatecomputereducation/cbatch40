#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter value into a:");
	scanf("%i",&a);
	printf("Enter value into b:");
	scanf("%i",&b);
	swap(&a,&b);
	printf("Value of a %i\n",a);
	printf("Value of b %i",b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

