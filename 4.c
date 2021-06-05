/* Write a C program to enter length and breadth of rectangle and find its area. */

#include <stdio.h>
void main()
{
	int length,bredth;
	printf("Enter length of rectangle:");
	scanf("%d",&length);
	printf("Enter bredth of rectangle:");
	scanf("%d",&bredth);
	printf("Perimeter of rectangle is: %d\n", length*bredth);
}