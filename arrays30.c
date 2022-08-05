#include<stdio.h>
int main()
{
	int a[50][50],n,m,i,j,sum,gsum=0;
		
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
		sum=0;
		for(j=0;j<m;j++)
			sum=sum+a[i][j];
		a[i][m]=sum;
		gsum=gsum+sum;
	}
	
	
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
			sum=sum+a[j][i];
		a[n][i]=sum;
		gsum=gsum+sum;
	}
	
	a[n][m]=gsum;
	
	n++;
	m++;
	
	printf("The result matrix..\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%5i",a[i][j]);
		printf("\n\n");
	}
	
	return 0;
}

