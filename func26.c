#include<stdio.h>
int sum(int)
int main()
{
	int n,sm;
	printf("Enter the limit:");
	scanf("%i",&n);
	sm=sum(n);
	printf("Sum %i",sm);
	return 0;
}
int sum(int n)
{
	int s=0;
	if(n==1)
		return 1;
	s=n+sum(n-1);
	return s;
}
