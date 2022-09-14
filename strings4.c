#include<stdio.h>
int length(char*);
int main()
{
	char x[50];
	printf("Enter any string:");
	gets(x);
	printf("Length: %i",length(x));
	return 0;
}
int length(char *p)
{
	int i;
	for(i=0;p[i]!='\0';i++);
	return i;
}

