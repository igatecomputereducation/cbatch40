#include<stdio.h>
int main()
{
	int n,m,i,j,a[50],b[50];
	
	printf("How many elements int a?");
	scanf("%i",&n);
	
	printf("Enter elements into a..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("How many elements int b?");
	scanf("%i",&m);
	
	printf("Enter elements into b..\n");
	for(i=0;i<m;i++)
		scanf("%i",&b[i]);
		
	for(i=n,j=0;j<m;i++,j++)
		a[i]=b[j];
	
	printf("Result array..\n");
	for(i=0;i<n+m;i++)
		printf("%i\t",a[i]);
		
	return 0;
}

