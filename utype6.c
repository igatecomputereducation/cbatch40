#include<stdio.h>
struct circle
{
	int rad;
	float area,cir;	
};
void process(struct circle*);
int main()
{
	struct circle a;
	printf("Radius:");
	scanf("%i",&a.rad);
	process(&a);
	printf("Area of circle %f\n",a.area);
	printf("circumference of circle %f",a.cir);
	return 0;
}
void process(struct circle *p)
{
	p->area=3.14*p->rad*p->rad;
	p->cir=2*3.14*p->rad;
}
