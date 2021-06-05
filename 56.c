/* Write a C Program to find maximum between two numbers using switch case. */

#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers to find maximum:");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1: printf("A is greater than B");
        break;
        case 0:
                switch(a<b)
                {
                    case 1: printf("B is greater than A");
                    break;
                    case 0: printf("Numbers are Equal");
                }
    }
}
