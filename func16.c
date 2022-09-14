#include<stdio.h>
int isprime(int);
int main()
{
	int n;
	printf("Enter any natural number");
	scanf("%i",&n);
	if(isprime(n))
		printf("Prime number");
	else
		printf("Not a prime number");
	return 0;
}
int isprime(int n)
{
	int i;
	if(n<2)
		return 0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
