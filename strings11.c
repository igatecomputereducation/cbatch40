#include<stdio.h>
int main()
{
	char ch='a';
	int num=456;
	float price=45.50;
	
	void *p=&ch,*q=&num,*r=&price;
	
	printf("%c\n",*((char*)p));
	printf("%i\n",*((int*)q));
	printf("%f",*((float*)r));
	
	return 0;
}

