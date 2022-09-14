#include<stdio.h>
float calc_interest(int,int,float);
int main()
{
	int amt,time;
	float rate;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	printf("Rate of interest:");
	scanf("%f",&rate);
	printf("Simple interest %f\n",calc_interest(amt,time,rate));
	printf("Total:%f",amt+calc_interest(amt,time,rate));
	return 0;
}
float calc_interest(int a,int t,float r)
{
	return a*t*r/100;
}
