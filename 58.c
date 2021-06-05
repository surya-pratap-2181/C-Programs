/* Write a C program to check whether a number is positive, negative or zero using switch case. */
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number to check even or odd:");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1: printf("Number is Positive");
        break;
        case 0: 
                switch(n<0)
                {
                    case 1: printf("Number is Negative");
                    break;
                    case 0: printf("Number is Zero");
                }
    }
}