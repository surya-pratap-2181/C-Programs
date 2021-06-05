/* Write a program to find frequency of each digit in a given interger. */
#include <stdio.h>
void main()
{
    long number;
    printf("Enter a number:");
    scanf("%ld",&number);
    int digit,count=0;
    printf("Enter a digit to check frequency:");
    scanf("%d",&digit);
    while(number>0)
    {
        if(number%10==digit)
        {
            count++;
        }
        number/=10;
    }
    printf("Frequency of %d is: %d", digit,count);
}