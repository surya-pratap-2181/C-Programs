/* Write a C program to enter two number and perform all operations. */

#include <stdio.h>
void main()
{
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	printf("The Addition is: %d\n", num1+num2);
	printf("The Subtraction is: %d\n", num1-num2);
	printf("The Multiplication is: %d\n", num1*num2);
	printf("The Division is: %d\n", num1/num2);
	printf("The Modulus is: %d\n", num1%num2);
	
}