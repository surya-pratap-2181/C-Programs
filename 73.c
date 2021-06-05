/* Write a C program to swap first and last digit of a number*/
#include <stdio.h>
#include <math.h>
void main()
{
    long n;
    printf("Enter a number:");
    scanf("%ld",&n);
    long first,last,num,swap,power;
    long count=0;
    first=last=num=n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    power = count-1;
    while(first>=10)
    {
        first/=10;
    }
    swap = first*pow(10,power);
    swap = num-swap;
    last%=10;
    swap = swap + last*pow(10,power);
    swap = swap - last;
    swap = swap + first;
    printf("Swaped Number:%ld\n",swap);
}