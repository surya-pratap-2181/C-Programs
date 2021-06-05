#include <stdio.h>
void main()
{
	FILE *p;
	char ch;
	int words=0,space=0,line=0;
	p=fopen("upper.txt","r");
	while(1)
	{
		if(feof(p))
		{
			break;
		}
		ch=fgetc(p);
		if(ch ==' ')
		{
			space++;
		}
		if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
		{
			words++;
		}
		if (ch =='\n')
		{
			line++;
		}
	}
	printf("%d\n", space);
	printf("%d\n", words);
	printf("%d\n", line);
}