#include<stdio.h>
int main()
{
	char x[]="igate";
	int i;
	printf("%i\n",sizeof(x));
	for(i=0;x[i]!='\0';i++)
		printf("%c",x[i]);
	return 0;
}


