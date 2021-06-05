/*write a C program to find the power of a number using function recursion*/
#include <stdio.h>
int power(int n,int m)
{
	int p;
	if (m==0)
	{
		return 1;
	}
	p=n*power(n,m-1);
	return p;
}
void main()
{
	int n,m,p;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter power:");
	scanf("%d",&m);
	p = power(n,m);
	printf("result is: %d\n", p);
}