#include<stdio.h>
int main()
{
	int n,i,a[50],x,y,rcount;
	
	printf("How many elements?");
	scanf("%i",&n);
	
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what?");
	scanf("%i",&x);
	printf("Replace with what?");
	scanf("%i",&y);
	
	for(rcount=0,i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			a[i]=y;
			rcount++;
		}	
	}
	
	if(rcount==0)
		printf("No replacements");
	else
	{
		printf("The result array is..\n");
		for(i=0;i<n;i++)
			printf("%i\t",a[i]);
	}
	
		
	return 0;
}

