/*  Write a C program to display multiple variables. */
#include <stdio.h>
void main()
{
	int a,b;
	a=125, b=12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.145927;
	char c = 'w';
	unsigned long ux = 2541567890;

	printf("int a + int c: %d\n", a+c);
	printf("float x + char c: %f\n", x+c);
	printf("double dx+ char c: %lf\n", dx+c);
	printf("(int)dx + long ax: %lf\n", ((int)dx + ax));
	printf("int a + float x: %f\n", a+x);
	printf("short s + int b: %d\n", s+b);
	printf("long ax + int b: %ld\n", ax+b);
	printf("short s + char c: %d\n", s+c);
	printf("long ax + char c: %ld\n", ax+c);
	printf("long ax + unsigned long ux: %ld\n", ax+ux);
}