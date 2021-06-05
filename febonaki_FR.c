#include <stdio.h>
int feb(int a,int b,int n);
void main()
{
    int a,b,x,n;
    a=0,b=1;
    printf("enter the number upto which febonaki series will be printed: ");
    scanf("%d",&n);
    printf("%d\n",a);
    printf("%d\n",b);
    x=feb(a,b,n);
}
int feb(int a,int b,int n)
{
    int x,y,z;
    x=a;
    y=b;
    z=x+y;
    printf("%d\n",z);
    x=y;
    y=z;
    if(n==0)
    {
        return 0;
    }
    else
    {
        z=feb(x,y,n-1);    
    }
    
}