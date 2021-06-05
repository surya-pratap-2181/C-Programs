/* Write a C program to find all prime factors of a number. */
#include <stdio.h>
void main()
{
    long num;
    printf("Enter a number:"); 
    scanf("%ld",&num);
    printf("Prime factors are:\t");
    for (long i = 1; i <= num; i++)
    {
        if(num%i==0)
        {
            int flag=1;
            for (int j = 2; j < i; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            
            }
            if(flag==1)
            {
                printf("%ld\t",i);
            }
        }
    }
}