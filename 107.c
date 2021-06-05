/* Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3 */
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i = 1; i <= 100; i++)
    {
        if(i%n==3)
        {
            printf("The Number are:%d\n",i);
        }
    }
}