#include<stdio.h>
int main()
{
	int n,i,j,a[50],temp;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);

	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	printf("The result array..\n");
	for(i=0;i<n;i++)
		printf("%i\t",a[i]);

	return 0;
}

