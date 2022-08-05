#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,n,m;
	
	printf("Enter the class of matrix..\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			b[j][i]=a[i][j];
	}
	
	printf("The result matrix..\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%5i",b[i][j]);
		printf("\n\n");
	}
	return 0;
}

