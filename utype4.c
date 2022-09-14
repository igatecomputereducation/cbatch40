#include<stdio.h>
struct stud
{
	char name[20];
	char gen[20];
	int age;
	char course[20];
	int sem;
};
void display(struct stud);
int main()
{
	struct stud x={"Narayana","Male",22,"B.Tech",3};
	display(x);
	return 0;
}
void display(struct stud a)
{
	printf("Name:%s\n",a.name);
	printf("Gender:%s\n",a.gen);
	printf("Age:%i\n",a.age);
	printf("Course:%s\n",a.course);
	printf("Semister:%i",a.sem);
}
