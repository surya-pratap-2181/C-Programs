/* Write a C program to print armstrong numbers from 1 to n.*/
#include <stdio.h>
#include <math.h>
void main()
{
    long e;
    printf("Enter the last number");
    scanf("%ld",&e);
    for (int i = 0; i <= e; i++)
    {
        long n,m,j,f,k=0;
        n=i;
        int count=0;
        m=j=n;
        while(n>0)
        {
            n/=10;
            count++;
        }
        while(m>0)
        {
            f=m%10;
            f = pow(f,count);
            k+=f;
            m /=10;
        }
        if(j==k)
        {
            printf("%ld\n",k);
        }
    }
}