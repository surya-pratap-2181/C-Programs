/* Write a C program to print all ASCII character with their values. */

#include <stdio.h>
void main()
{
	int i=0;
	while(i<=255)
	{
		printf("ASCII character %c has value = %d\n", i,i);
		i++;
	}
}