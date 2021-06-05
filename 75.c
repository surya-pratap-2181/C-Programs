/* Write a C program to calculate product of digits of a number */
#include <stdio.h>
void main()
{
    long n,p=1;
    printf("enter a number:");
    scanf("%ld",&n);
    while(n>0)
    {
        long rem = n%10;
        n/=10;
        p*=rem;
    }
    printf("Product of digits is :%ld",p);
}