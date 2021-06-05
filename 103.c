/* Write a C program that reads 5 numbers and counts the number of positive numbers and print the average of all positive values. */
#include <stdio.h>
void main()
{
    int a,b,c,d,e,countp=0,avg,sum=0;
    printf("Enter five Numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>0)
    {
        countp+=1;
        sum+=a;
    }
    if(b>0)
    {
        countp+=1;
        sum+=b;
    }
    if(c>0)
    {
        countp+=1;
        sum+=c;
    }
    if(d>0)
    {
        countp+=1;
        sum+=d;
    }
    if(e>0)
    {
        countp+=1;
        sum+=e;
    }
    avg=sum/countp;
    printf("Positive:%d\n",countp);
    printf("The average is:%d",avg);
}