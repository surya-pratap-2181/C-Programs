/* Write a C program to check whether a number is even or odd using switch case */

#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number to check even or odd:");
    scanf("%d",&n);
    switch(n%2!=0)
    {
        case 1: printf("Number is Odd");
        break;
        case 0: 
                switch(n==0)
                {
                    case 1: printf("Number is zero");
                    break;
                    case 0: printf("Number is Even");
                }
    }
}