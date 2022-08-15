#include<stdio.h>
void print_bill(float,int);
int main()
{
	float price;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	print_bill(price,qty);
	return 0;
}
void print_bill(float p,int q)
{
	float bill,dis,nbill;
	bill=p*q;
	dis=bill*5/100;
	nbill=bill-dis;
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
}

