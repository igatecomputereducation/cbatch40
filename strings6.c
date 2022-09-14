#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	printf("Enter any string:");
	gets(x);
	strrev(x);
	printf("Result string %s",x);
	return 0;
}

