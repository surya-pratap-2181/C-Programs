/* Write a C program to find roots of a quadratic equation using switch case. */
#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,d,x;
    float x1,x2;
    printf("Enter the values of A,B and C from Quadratic Equation:");
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-4*a*c;
    x=2*a;
    switch(d>0)
    {
        case 1: x1 = (-b+sqrt(d))/x;
                x2 = (-b-sqrt(d))/x;
                printf("Roots are %f and %f", x1,x2);
                break;
        case 0: printf("No roots possible");
    }
}