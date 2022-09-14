#include<stdio.h>
int main()
{
	int n,m,i,*p,*q;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",p+i);
		
	printf("How many more:");
	scanf("%i",&m);
	
	q=(int*)realloc(p,m*sizeof(int));
	
	printf("Enter more elements\n");
	for(i=n;i<n+m;i++)
		scanf("%i",q+i);
		
	printf("Total elements\n");
	for(i=0;i<n+m;i++)
		printf("%5i",*(q+i));
	
	return 0;
}


