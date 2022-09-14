#include<stdio.h>
union data
{
	char ch;
	short x;
	float y;
};
int main()
{
	union data a,b,c;
	a.ch='p';
	b.x=345;
	c.y=12.456;
	printf("%c\n",a.ch);
	printf("%hi\n",b.x);
	printf("%f",c.y);
	return 0;
}

