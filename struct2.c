#include <stdio.h>
void main()
{
	struct Student
	{
		char name[20];
		int id;
	}student[5];
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter student name:");
		scanf("%s",student[i].name);
		printf("Enter student id:");
		scanf("%d",&student[i].id);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("Student id is: %d\n", student[i].id);
		printf("Student name is:%s\n", student[i].name);
		
	}
}