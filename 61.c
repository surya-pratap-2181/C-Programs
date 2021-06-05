/* Write a C program to print all natural numbers from 1 to n. -using while loop. */
#include <stdio.h>
void main()
{
    int n,i=1;
    printf("Enter the last natural number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
}