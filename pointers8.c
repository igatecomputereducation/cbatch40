#include<stdio.h>
void cal_bill(float,int,float*,float*,float*);
int main()
{
	float price,bill,dis,nbill;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	cal_bill(price,qty,&bill,&dis,&nbill);
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
	return 0;
}
void cal_bill(float p,int q,float *b,float *d,float *n)
{
	*b=p*q;
	*d=*b*5/100;
	*n=*b-*d;
}
