#include<stdio.h>
int main()
{
	int n,i,a[50],sum;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	for(sum=0,i=0;i<n;i++)
			sum=sum+a[i];
			
	printf("Sum of all the elements %i",sum);		
	return 0;
}

