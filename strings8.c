#include<stdio.h>
void sort(char*);
void rem_duplicate(char*);
int main()
{
	char x[50];
	printf("Enter any string:");
	gets(x);
	sort(x);
	printf("Result string %s\n",x);
	rem_duplicate(x);
	printf("Result string %s",x);
	return 0;
}
void rem_duplicate(char *p)
{
	int i,j;
	for(i=0;p[i]!='\0';)
	{
		if(p[i]==p[i+1])
		{
			for(j=i+1;p[j]!='\0';j++)
				p[j]=p[j+1];
		}
		if(p[i]!=p[i+1])
			i++;
	}
}
void sort(char *p)
{
	int n,i,k;
	char temp;
	for(n=0;p[n]!='\0';n++);
	n--;
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			if(p[i]<p[k])
			{
				temp=p[i];
				p[i]=p[k];
				p[k]=temp;
			}
		}
	}
}

