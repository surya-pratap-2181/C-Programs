#include <stdio.h>
void main()
{
	int i=1,n=0;
	printf("Enter 10 numbers\n");
	while(i<=10)
	{
		scanf("%d",&i);
		if (n<i)
		{
			n=i;
		}
	}
	printf("The largest number is: %d\n", n);
}