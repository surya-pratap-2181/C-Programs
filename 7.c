/* Write a C program to enter temperature in celcius and convert it into fahernheit. */

#include <stdio.h>
void main()
{
	double temp;
	printf("Enter temperature in celcius:");
	scanf("%lf",&temp);
	printf("Temperature in fahernheit is: %lf\n",(temp*9/5)+32);
}