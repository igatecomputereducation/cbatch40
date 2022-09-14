#include<stdio.h>
int main()
{
	char name[50],dno[50],str[50],plc[50];
	int pin;
	printf("Your name:");
	gets(name);
	printf("DoorNo:");
	gets(dno);
	printf("Street:");
	gets(str);
	printf("Place:");
	gets(plc);
	printf("Pin:");
	scanf("%i",&pin);
	printf("-------------------------\n");
	printf("Address..\n");
	printf("Name: %s\nDno: %s\n%s\n%s-%i",name,dno,str,plc,pin);
	return 0;
}


