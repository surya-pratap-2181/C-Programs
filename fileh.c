#include <stdio.h>
void main()
{
	int a=10;
	FILE *p;

	p=fopen("corona.txt","w");
	fprintf(p, "%d\n", a);;
	fclose(p);
}