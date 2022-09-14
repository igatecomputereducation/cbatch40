#include<stdio.h>
int main()
{
	char ch='A';
	int num=456;
	float price=45.50;
	char *p=&ch;
	int *q=&num;
	float *r=&price;
	printf("%c\n",*p);
	printf("%i\n",*q);
	printf("%f",*r);
	return 0;
}
