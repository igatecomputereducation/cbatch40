#include<stdio.h>
union data
{
	char ch;
	short x;
	int y;	
};
int main()
{
	union data a;
	a.ch='a';
	a.x=32766;
	a.y=3456;
	printf("%c\n",a.ch);
	printf("%hi\n",a.x);
	printf("%i",a.y);
	return 0;
}

