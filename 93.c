/* Write a C program to print all perfect numbers upto n.*/
#include <stdio.h>
void main()
{
    long num;
    printf("Enter last number:");
    scanf("%ld",&num);
    for (int i = 1; i <=num; i++)
    {
        int n,count=0;
        n = i;
        for (int i = 1; i < n; i++)
        {
            if(n%i==0)
            {
                count+=i;
            }
        }
        if(n==count)
        {
            printf("%d\t", count);
        }
    }
}