#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Factorial %i",factorial(n));
	return 0;
}
int factorial(int n)
{
	int i,fact;
	for(fact=1,i=1;i<=n;i++)
		fact=fact*i;
	return fact;	
}

