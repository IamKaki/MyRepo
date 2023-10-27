#include <stdio.h>

/**
  * main - finds the area of a circle with input values from user
  * Return: - 0 Always
  */

int main(void)
{
	int r = 14;
	int area = 3.14  * (r * r);

	printf("Enter the value of radius for the circle.\n");
	scanf("%d", &r);

	printf("The area of a circle with a radius of %d is %d.\n", r, area);
	return (0);
}
