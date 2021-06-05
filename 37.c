/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate Percentage and Grade according to following
percentage >= 90% Grade A
percentage >= 80% Grade B
percentage >= 70% Grade C
percentage >= 60% Grade D
percentage >= 40% Grade E
percentage < 40% Grade F*/

#include <stdio.h>
void main()
{
	int phy,chem,bio,math,comp,total,per;
	printf("Enter Marks of Physics:");
	scanf("%d",&phy);
	printf("Enter Marks of Chemistry:");
	scanf("%d",&chem);
	printf("Enter Marks of Biology:");
	scanf("%d",&bio);
	printf("Enter Marks of Mathematics:");
	scanf("%d",&math);
	printf("Enter Marks of Computer:");
	scanf("%d",&comp);
	
	total=phy+chem+bio+math+comp;
	per=total/5;
	printf("Total Percentage : %d\n", per);
	if (per>=90)
	{
		printf("Grade A");
	}
	else if (per >= 80 && per < 90)
	{
		printf("Grade B\n");
	}
	else if (per >= 70 && per < 80)
	{
		printf("Grade C\n");
	}
	else if (per >= 60 && per < 70)
	{
		printf("Grade D\n");
	}
	else if (per >= 40 && per < 60)
	{
		printf("Grade E\n");
	}
	else if (per < 40)
	{
		printf("Grade F\n");
	}
	else
	{
		printf("Wrong Data\n");
	}
}