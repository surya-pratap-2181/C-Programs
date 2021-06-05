/* Write a C program to print hollow Square Star pattern with Diagonal */
#include <stdio.h>
void main()
{
	int n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i==0 || j==0 || i==j || i==n-1 || j==n-1)
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}