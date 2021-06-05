/* Write a C program to find sum of all prime numbers between 1 to n.*/
#include <stdio.h>
void main()
{
    int num,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        int flag=1;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            sum+=i;
        }
    }
    printf("The sum of all prime Number upto n is: %d",sum);
}