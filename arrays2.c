#include<stdio.h>
int main()
{
	int a[5],i;
	
	printf("Enter 5 integers..\n");
	for(i=0;i<5;i++)
		scanf("%i",&a[i]);
	
	
	printf("The given elements are..\n");
	for(i=0;i<5;i++)
		printf("%i\n",a[i]);
	
	return 0;
}

