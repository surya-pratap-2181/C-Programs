#include <stdio.h>
void main()
{
	struct student
	{
		int rno;
		char name[20];
		char course[15];
		float percent;
	}std[5];

	FILE *ptr;
	ptr = fopen("student.txt","w+");
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Student data %d\n", i+1);
		printf("Enter Roll number:");
		scanf("%d",&std[i].rno);
		printf("Enter Student Name:");
		scanf("%s",std[i].name);
		printf("Enter Course:");
		scanf("%s",std[i].course);
		printf("Enter Percentage:");
		scanf("%f",&std[i].percent);
		fprintf(ptr, "%d %s %s %f\n",std[i].rno, std[i].name,std[i].course,std[i].percent);
	}
	printf("Data Writing complete\n");
	rewind(ptr);
	for (int i = 0; i < 5; ++i)
	{
		printf("Student roll no. is: %d\n",std[i].rno);
		printf("Student Name is: %s\n",std[i].name);
		printf("Student Course is: %s\n",std[i].course);
		printf("Student Percentage is: %f\n",std[i].percent);
	}
	
	fclose(ptr);
}