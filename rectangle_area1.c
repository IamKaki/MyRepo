#include <stdio.h>

/**
  * main - gets the area of rectangle from user input
  * Return: - 0 Always
  */

int main(void)
{
	int h, l;

	printf("Please input the value for height.\n");
	scanf("%d", &h);

	printf("Please enter the  value of length.\n");
	scanf("%d", &l);

	printf("The area of the rectangle is %d.\n", h * l);

	return (0);
}
