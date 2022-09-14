#include<stdio.h>
int main()
{
	int *p,*q,n,m,i,j;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	p=(int*)calloc(n,m*sizeof(int));
	
	printf("Enter the matrix\n");
	
	q=p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++,q++)
			scanf("%i",q);
	}
	
	printf("The given matrix\n");
	q=p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++,q++)
			printf("%5i",*q);
		printf("\n\n")	;
	}
	return 0;
}


