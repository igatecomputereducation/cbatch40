#include<stdio.h>
int main()
{
	int n,i,a[50],pos;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);

	printf("Enter the position:");
	scanf("%i",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		
		for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
			
		printf("Enter the element:");
		scanf("%i",&a[pos]);
		
		n++;
		
		printf("Result array..\n");
		for(i=0;i<n;i++)
			printf("%i\t",a[i]);
	}

	return 0;
}

