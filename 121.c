/* Write a C program to print all the natural numbers between 1 to n using function recursion. */
#include <stdio.h>
void fun(int i,int n)
{
	printf("%d\n", i);
	if(i<n)
	{
		fun(++i,n);
	}
}
void main()
{
	fun(1,100);
}