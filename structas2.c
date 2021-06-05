#include <stdio.h>
struct student
{
	int rno;
	char name[20];
	char course[10];
	float percent;
}std[5];
void main()
{
	for (int i = 1; i <= 5; ++i)
	{
		printf("Enter Roll number of student: ");
		scanf("%d",&std[i].rno);
		printf("Enter Name of student: ");
		scanf("%s",std[i].name);
		printf("Enter Course of student: ");
		scanf("%s",std[i].course);
		printf("Enter Percentage of student: ");
		scanf("%f",&std[i].percent);
		
	}
	printf("\n");
	printf("Roll Number\t Name\t Course\t Percentage\n");
	for (int i = 1; i <= 5; ++i)
	{
		printf("%d\t\t %s\t %s\t %0.2f\n", std[i].rno, std[i].name,std[i].course,std[i].percent);
	}
}