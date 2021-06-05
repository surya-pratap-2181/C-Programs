/* Write a C program to check whether a number is  perfect or not */
#include <stdio.h>
void main()
{
    int num,count=0;
    printf("Enrter a number:");
    scanf("%d",&num);
    for (int i = 1; i < num; i++)
    {
        if(num%i==0)
        {
            count+=i;
        }
    }
    if(num==count)
    {
        printf("Number is a Perfect Number");
    }
    else
    {
        printf("It's Not a perfect Number");
    }
}