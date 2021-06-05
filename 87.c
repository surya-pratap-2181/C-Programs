/* Write a C program to print Pascal triangle upto n rows. */
#include <stdio.h>
#include <math.h>
long fact();
void main()
{
    int n;
    printf("Enter rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int c = 0; c <= (n - i - 2); c++)
        {
            printf(" ");
        }
        for(int c=0; c<=i; c++)
        {
            printf("%ld ", fact(i)/(fact(c)*fact(i-c)));
        }
    printf("\n");
    }
}
long fact(int n)
{
    int c;
    long result = 1;
    for(c=1; c<=n; c++)
    {
        result *= c;
    }
    return result;
}