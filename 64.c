/* Write a C program to print all even numbers between 1 to 100. -using while loop. */
#include <stdio.h>
void main()
{
    int n = 100;
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\t",i);    
        }
        i++;
    }
}