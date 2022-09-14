#include<stdio.h>
struct product
{
	int sno;
	char pname[20];
	float price;
	int qty;
	float amt;
};
int main()
{
	struct product x[50];
	int n,i;
	char ch;
	float tot,sgst,cgst,grandtot;
	
	printf("Enter product details\n-------------------\n");
	for(n=1,tot=0,i=0;;i++)
	{
		x[i].sno=i+1;
		printf("Name:");
		scanf("%s",x[i].pname);
		printf("Price:");
		scanf("%f",&x[i].price);
		printf("Qty:");
		scanf("%i",&x[i].qty);
		x[i].amt=x[i].price*x[i].qty;
		tot=tot+x[i].amt;
		fflush(stdin);
		printf("Wanna continue [y/n]:");
		scanf("%c",&ch);
		if(ch=='y')
			n++;
		else
			break;
	}
	
	sgst=tot*9/100;
	cgst=tot*9/100;
	grandtot=tot+cgst+sgst;
	
	printf("          cash bill\n");
	printf("------------------------------------\n");
	printf("sno\tname\tprice\tqty\tamt\n");
	printf("------------------------------------\n");
	for(i=0;i<n;i++)
		printf("%i\t%s\t%.2f\t%i\t%.f\n",x[i].sno,x[i].pname,x[i].price,x[i].qty,x[i].amt);
	printf("                        ------------\n");
	printf("\t\t\tTotal %.2f\n",tot);
	printf("\t\t\tCGST@9%c %.2f\n",'%',cgst);
	printf("\t\t\tSGST@9%c %.2f\n",'%',sgst);
	printf("\t\tGrand Total %.2f",grandtot);
	
	return 0;
}

