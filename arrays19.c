#include<stdio.h>
int main()
{
	int n,i,flag,a[50],b[50];
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements into a..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("Enter elements into b..\n");
	for(i=0;i<n;i++)
		scanf("%i",&b[i]);
		
	flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			flag=0;
			break;
		}
	}
		
	if(flag)
		printf("Both the arrays are equal");
	else
		printf("Both the arrays are not equal");
	return 0;
}

