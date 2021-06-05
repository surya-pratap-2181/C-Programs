/* Write a C program to create Simple Calculator using Switch Case. */
#include <stdio.h>
void main()
{
    float a,b;
    int n;
    printf("Enter First Number:");
    scanf("%f",&a);
    printf("Enter Second Number:");
    scanf("%f",&b);
    printf("********Calculator********\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter a Number from above to perform following operation: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Addition is: %0.2f + %0.2f = %0.2f", a,b,a+b);
        break;
        case 2: printf("Subtraction is: %0.2f - %0.2f = %0.2f", a,b,a-b);
        break;
        case 3: printf("Multiplication  is: %0.2f + %0.2f = %0.2f", a,b,a*b);
        break;
        case 4: printf("Division  is: %0.2f - %0.2f = %0.2f", a,b,a/b);
        break;
        default: printf("Please Select the valid numbers");
    }
}