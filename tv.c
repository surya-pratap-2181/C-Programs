#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("str.txt","r");
    if(ptr==NULL)
    {
       printf("error in opening file\n");
       exit(0);
    }
    while(1)
    {
        ch=fgetc(ptr);
        if(feof(ptr))
        {
          break;  
        }
        printf("%c",ch-32);
    }
    fclose(ptr);
}