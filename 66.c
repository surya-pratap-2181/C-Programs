/* Write a C program to print sum of all natural numbers between 1 to n. */
#include <stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf(" The sum of %d natural numbers is: %d", n,s);
}