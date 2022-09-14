#include<stdio.h>
int main()
{
	short *p,i,n;
	printf("How many elements:");
	scanf("%hi",&n);
	p=(short*)malloc(n*sizeof(short));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%hi",p+i);
	printf("The given elements\n");
	for(i=0;i<n;i++)
		printf("%5hi",*(p+i));
	free(p);
	return 0;
}


