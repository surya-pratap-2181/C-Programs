/* Write a C program to find sum of all odd numbers between 1 to n. */
#include <stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            s+=i;
        }
        i++;
    }
    printf(" The sum of %d natural numbers is: %d", n,s);
}