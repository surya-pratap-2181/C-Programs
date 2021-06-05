/* Write a C program to compute the perimeter and area of a rectangle with a height of 7inches and width of 5 inches. */
#include <stdio.h>
void main()
{
	int height,width;
	height=7,width=5;

	printf("The perimeter of rectangle is: %d\n", 2*(height+width));
	printf("The area of rectangle is: %d\n", height*width);
}