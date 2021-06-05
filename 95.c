/* Write a C program to print Storng number between 1 to n. */
#include <stdio.h>
void main()
{
    int m;
    printf("Enter the last number:");
    scanf("%d",&m);
    for (int i = 1; i < m; i++)
    {
        int num,n,f,sum=0;
        n=i;
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
    }
}