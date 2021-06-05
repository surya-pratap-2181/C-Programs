/* Write a C program to enter length in cm and convert it into meter and km. */

#include <stdio.h>
void main()
{
	double length;
	printf("Enter length in cm:");
	scanf("%lf",&length);
	printf("The length in meter is: %lf\n", length/100);
	printf("The length in km is: %lf\n", length/100000);
}