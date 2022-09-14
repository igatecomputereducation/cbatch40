#include<stdio.h>
int main()
{
	float price,bill,*p,*b;
	int qty,*q;
	p=&price;
	q=&qty;
	b=&bill;
	printf("Price:");
	scanf("%f",p);			//&price
	printf("Quantity:");
	scanf("%i",q);			//&qty
	*b=(*p)*(*q);
	printf("Total bill %f",*b);
	return 0;
}
