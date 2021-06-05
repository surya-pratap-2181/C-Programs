/* Write a C program to find factorial of a number. */
#include <stdio.h>
void main()
{
    int num,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = num; i >= 1; i--)
    {
        fact*=i;
    }
    printf("Factorial of %d is %d",num,fact);
}