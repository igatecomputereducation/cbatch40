#include<stdio.h>
int main()
{
	int a[50][50],n,m,i,j,sum;
	float mean;
	
	printf("Enter the class of matrix..\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter the matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}	
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
				sum=sum+a[i][j];
	}
	
	mean=sum/(n*m);
	printf("Mean of matrix %f",mean);
	return 0;
}

