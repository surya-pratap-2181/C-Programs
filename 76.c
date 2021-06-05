/* Write a C program to enter a number and print its reverse */
#include <stdio.h>
void main()
{
    long n,i=0;
    printf("Enter a number to get reverse:");
    scanf("%ld",&n);
    while(n>0)
    {
        i = i*10;
        i = i + n%10;
        n/=10;
    }
    printf("Reverse of number is:%ld",i);
}