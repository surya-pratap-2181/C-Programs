#include <stdio.h>
struct distance
{
	int feet;
	float inch;
}dist1,dist2,sum;

void main()
{
	printf("Enter First Distance\n");
	printf("Enter feet:");
	scanf("%d",&dist1.feet);
	printf("Enter inch:");
	scanf("%f",&dist1.inch);

	printf("Enter Second Distance\n");
	printf("Enter feet:");
	scanf("%d",&dist2.feet);
	printf("Enter inch:");
	scanf("%f",&dist2.inch);

	sum.feet = dist1.feet + dist2.feet;
	sum.inch = dist1.inch + dist2.inch;

	while(sum.inch>=12)
	{
		++sum.feet;
		sum.inch = sum.inch-12;
	}
	printf("Sum of distance is : %d\'%.1f\"", sum.feet,sum.inch);
}