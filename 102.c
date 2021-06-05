/* Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers. */
#include <stdio.h>
void main()
{
    int a,b,c,d,e,countn=0,countp=0;
    printf("Enter five Numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>0)
    {
        countp+=1;
    }
    if(a<0)
    {
        countn+=1;
    }
    if(b>0)
    {
        countp+=1;
    }
    if(b<0)
    {
        countn+=1;
    }
    if(c>0)
    {
        countp+=1;
    }
    if(c<0)
    {
        countn+=1;
    }
    if(d>0)
    {
        countp+=1;
    }
    if(d<0)
    {
        countn+=1;
    }
    if(e>0)
    {
        countp+=1;
    }
    if(e<0)
    {
        countn+=1;
    }
    printf("Positive:%d",countp);
    printf("Negative:%d",countn);
}