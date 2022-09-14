#include<stdio.h>
int main()
{
	char x[]={'i','g','a','t','e'};
	int i;
	printf("%i\n",sizeof(x));
	for(i=0;i<5;i++)
		printf("%c",x[i]);
	return 0;
}


