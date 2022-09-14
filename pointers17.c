#include<stdio.h>
int main()
{
	double num;
	char x[]="computer";
	char *y="computer";
	printf("%i\n",sizeof(int));
	printf("%i\n",sizeof(num));
	printf("%i\n",sizeof(x));
	printf("%i\n",sizeof(y));
	printf("%i",sizeof("hello"));
	return 0;
}


