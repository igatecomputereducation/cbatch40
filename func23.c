#include<stdio.h>
void igate(int[],int);
int main()
{
	int a[]={10,20,30,40,50};
	int i;
	igate(a,5);
	for(i=0;i<5;i++)
		printf("%i\t",a[i]);
	return 0;
}
void igate(int p[],int n)
{
	int i;
	for(i=0;i<n;i++)
		p[i]=p[i]+5;
}
