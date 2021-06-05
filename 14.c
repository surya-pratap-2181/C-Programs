/* Write a C program to compute the perimeter and area of a circle with a radius of 6 inches. */
#include <stdio.h>
void main()
{
	double radius = 6; //radius in inches

	printf("The perimeter of circle is: %0.2lf\n", 2*3.14*radius);

	printf("The area of circle is: %0.2lf\n", 3.14*radius*radius);
}