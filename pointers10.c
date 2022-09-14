#include<stdio.h>
int main()
{
	int num,*p,*q;
	num=45;
	p=&num;
	q=&num;
	printf("%i\n",num);
	*p=*p+5;
	printf("%i\n",num);
	*q=*q+5;
	printf("%i",num);
	return 0;
}

