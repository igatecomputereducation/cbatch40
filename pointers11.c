#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50};
	int i;
	
	for(i=0;i<5;i++)
		printf("%5i",*(a+i));
		
	printf("\n");
	
	for(i=0;i<5;i++)
		printf("%5i",a[i]);
	
	return 0;
}

