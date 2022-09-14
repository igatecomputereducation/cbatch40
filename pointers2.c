#include<stdio.h>
int main()
{
	int num;
	num=45;
	printf("%i\n",num);
	printf("%i",*(&num));
	return 0;
}
