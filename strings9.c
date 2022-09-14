#include<stdio.h>
int main()
{
	char x[3][20];
	int i;
	printf("Enter 3 lines of text\n");
	for(i=0;i<3;i++)
		gets(x[i]);
	printf("The given lines of text\n");
	for(i=0;i<3;i++)
		printf("%s\n",x[i]);
	return 0;
}

