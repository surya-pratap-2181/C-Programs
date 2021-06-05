/* Write a C program to check whether a number is palindrome or not. */
#include <stdio.h>
void main()
{
    long n,num,r=0;
    printf("Enter a number to check palindrome or not:");
    scanf("%ld",&n);
    num=n;
    while(n>0)
    {
        r=r*10;
        r=r+n%10;
        n/=10;
    }
    if(r==num)
    {
        printf("Number is palindrome");
    }
    else 
    {
        printf("Number is not palindrome");
    }
}