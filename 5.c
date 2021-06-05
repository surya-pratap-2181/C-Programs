/* Write a C program to enter radius of circle and find its diameter, circumference and area. */

#include <stdio.h>
void main()
{
	float radius;
	printf("Enter radius of Circle:");
	scanf("%f",&radius);
	printf("The diameter of circle is: %0.2f\n", 2*radius);
	printf("The circumference of circle is: %0.2f\n", 2*3.14*radius);
}