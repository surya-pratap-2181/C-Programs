#include <stdio.h>
void main()
{
	struct product
	{
		int id;
		char name[20];
		int quantity;
		float price;
	}pd[5];
	
	for (int i = 1; i <= 5; ++i)
	{
		printf("Enter product id: ");
		scanf("%d",&pd[i].id);
		printf("Enter Product name:");
		scanf("%s", pd[i].name);
		printf("Enter Product Quantity:");
		scanf("%d", &pd[i].quantity);
		printf("Enter Product Price: ");
		scanf("%f",&pd[i].price);
	}

	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 4-i; ++j)
		{
			if (pd[i].id>pd[i+1].id)
			{
				int t=pd[i].id;
				pd[i].id=pd[i+1].id;
				pd[i+1].id=t;
			}
		}
	}

	printf("\n");

	for (int i = 1; i <= 5; ++i)
	{
		printf("Product Id: %d\n", pd[i].id);
		printf("Product Name: %s\n", pd[i].name);
		printf("Product Quantity: %d\n",pd[i].quantity);
		printf("Product Price: %f\n", pd[i].price);
	}
}