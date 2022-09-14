#include<stdio.h>
struct emp
{
	char ename[20];
	int sal;
	float hra,da,gross;
}x;
int main()
{

	printf("Name:");
	scanf("%s",x.ename);
	printf("Salary:");
	scanf("%i",&x.sal);
	x.hra=x.sal*13.0/100;
	x.da=x.sal*15/100;
	x.gross=x.sal+x.hra+x.da;
	printf("\nPayslip\n");
	printf("Name %s\n",x.ename);
	printf("Salary %i\n",x.sal);
	printf("House rent allowence %f\n",x.hra);
	printf("Dearness allowence %f\n",x.da);
	printf("Gross salary %f",x.gross);
	return 0;
}

