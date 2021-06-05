/* Write a C program that accepts two integer from the user and calculate the product of the two integers. */
#include <stdio.h>
void main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	printf("The product of two integers is: %d\n", num1*num2);
}