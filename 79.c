/* Write a C program to enter a number and print it in words. */
#include <stdio.h>
void main()
{
    long n,m,r=0;
    printf("Enter a number to print in words:");
    scanf("%ld",&n);
    while(n>0)
    {
        r=r*10;
        r = r+n%10;
        n/=10;
    }
    while(r>0)
    {
        m = r%10;
        switch(m)
        {
            case 0: printf("Zero ");
            break;
            case 1: printf("One ");
            break;
            case 2: printf("Two ");
            break;
            case 3: printf("Three ");
            break;
            case 4: printf("Four ");
            break;
            case 5: printf("Five ");
            break;
            case 6: printf("Six ");
            break;
            case 7: printf("Seven ");
            break;
            case 8: printf("Eight ");
            break;
            case 9: printf("Nine ");
            break;
            default: printf("kd ");
        }
        r/=10;
    }

}