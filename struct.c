#include <stdio.h>
void main()
{
	struct Student
	{
		char name[20];
		int id;
	}student;
	printf("Enter student name:");
	scanf("%s",student.name);
	printf("Enter student id:");
	scanf("%d",&student.id);
	printf("Student id is: %d", student.id);
	printf("Student name is:%s", student.name);
}