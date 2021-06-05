#include  <stdio.h>
void main()
{
	int n;
	printf("Enter number of rows:");
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		for (int s = 0; s < n-i; ++s)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; ++j)
		{
			if ( j==0 || i==n-1 || i==j)
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