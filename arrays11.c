#include<stdio.h>
int main()
{
	int n,i,a[50];
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);

	printf("Enter an element to append:");
	scanf("%i",&a[n]);
	
	n++;
	
	printf("The result array..\n");
	for(i=0;i<n;i++)
		printf("%i\t",a[i]);

	return 0;
}

