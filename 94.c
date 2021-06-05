/* Write a C program to check whether a number is strong or not. */
#include <stdio.h>
void main()
{
    int num,n,sum,f;
    sum=0;
    printf("Enter a  number:");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        int count = 1;
        f=n%10;
        for (int i = 1; i <= f; i++)
        {
            count*=i;
        }
        sum+=count;
        n/=10;
    }
    if(num==sum)
    {
        printf("Strong Number: %d\n",sum);
    }
    else
    {
        printf("Not Strong number: %d",num);
    }
}