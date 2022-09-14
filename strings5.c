#include<stdio.h>
void reverse(char*);
int main()
{
	char x[50];
	printf("Enter any string:");
	gets(x);
	reverse(x);
	printf("Result string %s",x);
	return 0;
}
void reverse(char *p)
{
	char temp;
	int i,j;
	for(j=0;p[j]!='\0';j++);
	j--;
	for(i=0;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}

