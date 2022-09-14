#include<stdio.h>
int power(int b,int e)
{
	int r,i;
	for(r=1,i=1;i<=e;i++)
		r=r*b;
	return r;
}
int main()
{
	int base,exp,res;
	printf("Base:");
	scanf("%i",&base);
	printf("Exponent:");
	scanf("%i",&exp);
	res=power(base,exp);
	printf("The result %i",res);
	return 0;
}

