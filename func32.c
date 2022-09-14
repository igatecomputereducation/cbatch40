#include<stdio.h>
#define glue(a,b) a##b
int main()
{
	int ab;
	ab=20;
	printf("%i",glue(a,b));
	return 0;
}
