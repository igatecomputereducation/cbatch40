#include<stdio.h>
int main()
{
	int n,i,a[50],esum,osum;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	esum=osum=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			esum=esum+a[i];
		else
			osum=osum+a[i];
	}
		
	printf("Even elements sum %i\n",esum);
	printf("Odd elements sum %i",osum);
	return 0;
}

