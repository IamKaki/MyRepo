#include <stdio.h>

/**
  * main - find the simple interset given the principle, time and interest
  * Return: 0 Always
  */

int main(void)
{
	int p, y;
	float r;

	printf("Enter number of Principal amount, followed by rate of interest.\n");
	scanf("%d", &p);
	scanf("%f", &r);

	printf("Now enter the number of years:\n");
	scanf("%d", &y);

	float si = (p * (r / 100) * y);

	printf("Your simple interest for %dyears is %.2f\n", y, si);
	return (0);
}
