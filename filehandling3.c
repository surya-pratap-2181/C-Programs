#include <stdio.h>
void main()
{
	typedef struct student
	{
		int rno;
		char name[20];
		char course[15];
		float percent;
	}std;

	FILE *ptr;
	int n;
	printf("Enter number of entries:");
	scanf("%d",&n);
	std e[n];
	ptr = fopen("student.txt","r+");
	for (int i = 0; i < n; ++i)
	{
		printf("Enter Student data %d\n", i+1);
		printf("Enter Roll number:");
		scanf("%d",&e[i].rno);
		printf("Enter Student Name:");
		scanf("%s",e[i].name);
		printf("Enter Course:");
		scanf("%s",e[i].course);
		printf("Enter Percentage:");
		scanf("%f",&e[i].percent);
	}
	fwrite(e,sizeof(std),2,ptr);
	printf("Data Writing complete\n");
	rewind(ptr);
	fread(e,sizeof(std),2,ptr);
	
	fclose(ptr);
}