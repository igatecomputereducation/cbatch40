#include<stdio.h>
int i=1;
int main()
{
	printf("%i\n",i++);
	if(i<=10)
		main();
	return 0;
}

