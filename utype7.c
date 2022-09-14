#include<stdio.h>
struct circle
{
	int rad;
	float area,cir;	
};
int main()
{
	struct circle *p;
	p=(struct circle*)malloc(sizeof(struct circle));
	p->rad=5;
	p->area=3.14*p->rad*p->rad;
	p->cir=2*3.14*p->rad;
	printf("Area %f\n",p->area);
	printf("Circumference %f",p->cir);
	free(p);
	return 0;
}

