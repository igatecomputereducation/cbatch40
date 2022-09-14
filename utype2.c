#include<stdio.h>
struct address
{
	char name[20];
	char dno[20];
	char street[20];
	char place[20];
	int pin;
	
};
int main()
{
	struct address x={"igate","4-4-18/A","pulabazar","kavali",524201};
	printf("Address\n");
	printf("%s\nDno:%s\n%s\n%s-%i",x.name,x.dno,x.street,x.place,x.pin);
	return 0;
}

