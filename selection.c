#include <stdio.h>
void main()
{
	int A[7] = {45,56,52,55,44,98,92};
	for (int i = 0; i < 7; ++i)
	{
		int small = A[i];
		int position = i;
		for (int j = 0; j < 7; ++j)
		{
			if (A[j]<small)
			{
				small = A[j];
				position = j;
			}
		}
		if (position!=i)
		{
			int t = A[i];
			A[i] = A[position];
			A[position] = t;
		}
	}
	for (int j = 0; j < 7; ++j)
	{
		printf("%d\n", A[j]);
	}
}