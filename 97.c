/* Write a C program to print Square Star Pattern. */
#include <stdio.h>
void main()
{
	int n;
	printf("Enter Number of rows: \n");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int i = 0; i < n; ++i)
		{
			printf("*");
		}
		printf("\n");
	}
}