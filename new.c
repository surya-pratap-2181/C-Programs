#include <stdio.h>
void main()
{
	for (int i = 1; i <= 3; ++i)
	{
		for (int i = 1; i <= 3; ++i)
		{
			if(i==1 || i==2 || i==3)
				break;
		}
		printf("Hello\n");
	}
}