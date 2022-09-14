#include<stdio.h>
int factorial(int);
int main()
{
	int n,fact;
	printf("Enter any natural number:");
	scanf("%i",&n);
	fact=factorial(n);
	printf("Factorial %i",fact);
	return 0;
}
int factorial(int n)
{
	int f=1;
	if(n==1)
		return 1;
	f=n*factorial(n-1);
	return f;
}

