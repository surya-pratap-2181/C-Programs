#include <stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int id;		
	}student,*p;
	p=&student;
	printf("Enter student name:");
	scanf("%s",p->name);
	printf("Enter student id:");
	scanf("%d",&p->id);

	printf("The name of student is: %s\n", p->name);
	printf("The id of student is: %d\n", p->id);
}