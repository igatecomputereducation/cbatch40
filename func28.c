#include<stdio.h>
void fibonacci(int,int,int);
int main()
{
	int n;
	printf("How many terms?");
	scanf("%i",&n);
	fibonacci(0,1,n);
	return 0;
}
void fibonacci(int a,int b,int n)
{
	if(n==0)
		return;
	printf("%i\t",a);
	fibonacci(b,a+b,--n);	
}

