#include<stdio.h>
void display(int[]);
int main()
{
	int a[]={10,20,30,40,50,60,70};
	display(a,7);
	return 0;
}
void display(int p[],int n)
{
	int i;
	printf("Array elements..\n");
	for(i=0;i<n;i++)
		printf("%i\t",p[i]);
}
