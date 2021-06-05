/* Write a C program that accepts some integers from the user and find the highest value and the input position. */
#include <stdio.h>
void main()
{
    int a,b,c,d,e,position,s=0;
    printf("Enter 5 values:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(s<a)
    {
        s=a;
        position=1;
    }
    if(s<b)
    {
        s=b;
        position=2;
    }
    if(s<c)
    {
        s=c;
        position=3;
    }
    if(s<d)
    {
        s=d;
        position=4;
    }
    if(s<e)
    {
        s=e;
        position=5;
    }
    printf("Highest value is: %d\n",s);
    printf("Position is: %d\n",position);
}