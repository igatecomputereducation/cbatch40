#include<stdio.h>
int main()
{
	char x[50];
	int i,j,flag;
	printf("Enter any string:");
	gets(x);
	flag=1;
	for(j=0;x[j]!='\0';j++);
	for(i=0,j--;i<j;i++,j--)
	{
		if(x[i]!=x[j])
		{
			flag=0;
			break;
		}
	}
	if(flag)
		printf("Palindrome string");
	else
		printf("Not a palindrome string");
	return 0;
}

