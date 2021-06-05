#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,n1,*p;
	printf("Enter number of Elements:\n");
	scanf("%d",&n);

	p=(int *)malloc(n*sizeof(int));

	if(p==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	printf("Address allocated\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",(p+i));
	}
	printf("Enter new size:");
	scanf("%d",&n1);
	p=realloc(p,n1);
	printf("New Address allocated are:\n");
	for (int i = 0; i < n1; ++i)
	{
		printf("%d\n", (p+i));
	}
	free(p);
	printf("Memory freed\n");
}