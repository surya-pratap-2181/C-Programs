/* Write a C program to calculate sum of digits of a number */
#include <stdio.h>
void main()
{
    long n,c=0;
    printf("Enter a number:");
    scanf("%ld",&n);
    while(n>0)
    {
        long rem =n%10;
        n/=10;
        c+=rem;
    }
    printf("Sum of digits: %ld",c);
}