#include<stdio.h>
int array_sum(int[],int);
int main()
{
	int a[50],n,i;
	printf("How many elements?");
	scanf("%i",&n);
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	printf("Sum of elements %i",array_sum(a,n));
	return 0;
}
int array_sum(int p[],int n)
{
	int s,i;
	for(s=0,i=0;i<n;i++)
		s=s+p[i];
	return s;	
}
