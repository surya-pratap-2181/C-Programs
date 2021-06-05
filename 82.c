/* Write a C program to find all factors of a number. */
#include <stdio.h>
void main()
{
    int num;
    printf("Enrter a number:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if(num%i==0)
        {
            printf("Factors are:%d\n",i);
        }
    }
}