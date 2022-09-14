#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	if(n==reverse(n))
		printf("Palindrome");
	else
		printf("Not a palindrome");
	return 0;
}
int reverse(int n)
{
	int rev;
	for(rev=0;n!=0;n=n/10)
		rev=rev*10+n%10;
	return rev;
}
