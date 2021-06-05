/* Write a C program to print all alphabets from a to z. -using while loop. */
#include <stdio.h>
void main()
{
    char i=97;
    char n = 122;
    while(i<=n)
    {
        printf("%c\t",i);
        i++;
    }
}