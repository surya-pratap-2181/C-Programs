/* Write a C program to count number of digits in a number. */
#include <stdio.h>
void main()
{
    long number;
    printf("Enter a number:");
    scanf("%ld", &number);
    int count=0;
    while(number>0)
    {
        number/=10;
        count++;
    }
    printf("Number of digits are: %d", count);
}