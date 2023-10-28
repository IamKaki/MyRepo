#include <stdio.h>

/**
  * main - finds if an inputed number is devisble by 97 or not.
  * Return: 0 Always.
  */

int main(void)
{
	int i;

	printf("Enter a number to check if its devisbe by 97.\n");
	scanf("%d", &i);
	if (i % 97 == 0)
		printf("%d is divisible by 97.\n", i);
	else
		printf("%d id not divisible by 97.\n", i);
	return (0);
}
