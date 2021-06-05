/* Write a C program to convert specified days into years, weeks and days. */
#include <stdio.h>
void main()
{
	long days = 1329;
	printf("The number of years are: %ld\n", days/365);
	printf("The number of weeks are: %ld\n", days/7);
	printf("The number of months are: %ld\n", days/30);
}