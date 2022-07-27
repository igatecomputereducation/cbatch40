#include<stdio.h>
int main()
{
	int n,i,a[50];
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("The given elements are..\n");
	for(i=0;i<n;i++)
		printf("%i\t",a[i]);
	
	return 0;
}

