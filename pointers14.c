#include<stdio.h>
int main()
{
	int *p[5];
	int a=10,b=20,c=30,d=40,e=50,i;
	p[0]=&a;p[1]=&b;p[2]=&c;p[3]=&d;p[4]=&e;
	
	printf("Values of variables\n");
	for(i=0;i<5;i++)
		printf("%5i",*(*(p+i)));
	return 0;
}


