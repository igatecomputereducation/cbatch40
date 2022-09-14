#include<stdio.h>
struct box
{
	int b,w,h,v;	
};

int main()
{
	struct box a;
	struct box *p=&a;
	printf("Enter 3 sides of box\n");
	scanf("%i%i%i",&(p->b),&(p->w),&(p->h));
	p->v=p->b*p->w*p->h;
	printf("Volume of box %i",p->v);
	return 0;
}

