/* Write a C program to print multiplication table of any number */
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number to print table:");
    scanf("%d",&n);
    int i=1;
    while(i<=10)
    {
        printf("%d x %d = %d\n", n,i,i*n);
        i++;
    }
}