#include<stdio.h>
int main()
{
	int num,*p,**q;
	num=56;
	p=&num;
	q=&p;
	printf("%i\n",num);
	printf("%i\n",*p);
	printf("%i",**q);
	return 0;
}

