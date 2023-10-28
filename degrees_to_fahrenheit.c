#include <stdio.h>

/**
  * main - to convert degrees to fahrenheit
  * Return: Always 0
  */

int main(void)
{
	int i;

	printf("Enter degrees:\n");
	scanf("%d", &i);

	int con = ((i * 9 / 5) + 32);

	printf("Your degrees in fahrenheit are %d.\n", con);
	return (0);
}
