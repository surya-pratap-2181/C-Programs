/* Write a C program to check a number is Armstrong number or not */
#include <stdio.h>
#include <math.h>
void main()
{
    long n,j,f,i=0;
    printf("Enter a number:");
    scanf("%ld",&n);
    j=n;
    while(n>0)
    {
        f=n%10;
        f = f*f*f;
        i+=f;
        n/=10;
    }
    printf("%ld\n",i);
    if(j==i)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
}
/*For n digit number */
#include <stdio.h>
#include <math.h>
void main()
{
    long n,m,j,f,i=0;
    int count=0;
    printf("Enter a number:");
    scanf("%ld",&n);
    m=j=n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    printf("%d\n",count);
    while(m>0)
    {
        f=m%10;
        f = pow(f,count);
        i+=f;
        m /=10;
    }
    printf("%ld\n",i);
    if(j==i)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
}