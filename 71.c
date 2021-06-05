/* Write a C program to find first and last digit of a number. */
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
    printf("The first number is: %ld\n", first);
    last%=10;
    printf("The last number is: %ld\n", last);
}
/*Alternate Method*/
#include <stdio.h>
#include <math.h>
void main()
{
    long number,first,last,count=0;
    long power=0;
    printf("Enter a Number:");
    scanf("%ld", &number);
    first = last = number;
    while(number>0)
    {
        number/=10;
        count++;
    }
    printf("Number of digits:%ld\n", count);
    power = pow(10,count-1);
    first= first / power;
    printf("The first number is: %ld\n", first);
    last%=10;
    printf("The last number is: %ld", last);
}