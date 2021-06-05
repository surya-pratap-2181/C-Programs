/* Write a C program that read 5 numbers and sum of all odd values between them. */
#include <stdio.h>
void main()
{
    int a,b,c,d,e,sum=0;
    printf("Enter five Numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a%2!=0)
    {
        sum+=a;
    }
    if(b%2!=0)
    {
        sum+=b;
    }
    if(c%2!=0)
    {
        sum+=c;
    }
    if(d%2!=0)
    {
        sum+=d;
    }
    if(e%2!=0)
    {
        sum+=e;
    }
    printf("Sum of all Odd Numbers:%d\n",sum);
}