/* Write a C program to find power of a number using for loop. */
#include <stdio.h>
void main()
{
    int number,power,result=1;
    printf("Enter a nmber:");
    scanf("%d",&number);
    printf("Enter the power:");
    scanf("%d",&power);
    for (int i = 1; i <= power; i++)
    {
        result = result*number;
    }
    printf("The result of number :%d with power: %d is :%d",number,power,result);
}