/* Write a C program to find sum of first and last digit of a number. */
#include <stdio.h>
void main()
{
    long number,first,last;
    printf("Enter a Number:");
    scanf("%ld", &number);
    first = last = number;
    while(first>=10)
    {
        first/=10;
    }
    last%=10;
    printf("The sum of first (%ld) and last (%ld) digit is: %ld\n", first,last,first+last);
}