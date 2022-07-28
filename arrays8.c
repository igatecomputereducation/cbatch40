#include<stdio.h>
int main()
{
	int n,i,a[50],x,flag;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what?");
	scanf("%i",&x);
	
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	}
		
	if(flag)
		printf("Existed");
	else
		printf("Not existed");
	return 0;
}

