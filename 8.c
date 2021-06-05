/* Write a C program to enter temperature in fahernheit and convert it into celcius. */

#include <stdio.h>
void main()
{
	double temp;
	printf("Enter temperature in fahernheit:");
	scanf("%lf",&temp);
	printf("Temperature in celcius is: %lf\n",(temp-32)+5/9);
}