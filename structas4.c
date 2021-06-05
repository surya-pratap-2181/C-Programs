#include <stdio.h>
void main()
{
	struct Employee
	{
		int id;
		char name[20];
		float salary;
	}emp[5];
	for (int i = 1; i <= 5; ++i)
	{
		printf("Enter Employee id:");
		scanf("%d",&emp[i].id);
		printf("Enter Employee Name:");
		scanf("%s",emp[i].name);
		printf("Enter Employee Salary:");
		scanf("%f",&emp[i].salary);
	}

	printf("\n");

	for (int i = 1; i <= 5; ++i)
	{
		if (emp[i].salary>20000)
		{
			printf("Employee id is: %d\n", emp[i].id);
			printf("Employee name is: %s\n", emp[i].name);
			printf("Employee salary is: %.2f\n", emp[i].salary);
		}
	}
}