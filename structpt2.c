#include <stdio.h>
void main()
{
	struct student
	{
		char name[20];
		int id;
	}student[5],*p;

	p=&student[0];

	for (int i = 0; i < 5; ++i)
	{	
		printf("Enter name of student:");
		scanf("%s",(p+i)->name);
		printf("Enter student id:");
		scanf("%d",&(p+i)->id);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("Student name is: %s\n", (p+i)->name);
		printf("Student id is: %d\n", (p+i)->id);
	}
}