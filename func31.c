#include<stdio.h>
#define X
int main()
{
#ifdef X
	int a,b;
	printf("Enter two integers\n");
	scanf("%i%i",&a,&b);
	if(a==b)
		printf("Equals");
	else
		printf("Not equal");
#else
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n==0)
		printf("zero");
	else if(n>0)
		printf("Positive");
	else
		printf("Negative");
#endif	
	return 0;
}
