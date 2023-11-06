#include <stdio.h>

/**
  * main - checks weather character enetered is upper or lowercase
  * Return: 0 always
  */

int main(void)
{
	char l;

	printf("Enter a single character.\n");
	scanf("%c", &l);

	if (l >= 97 && l <= 122)
		printf("%c is a lowercase character.\n", l);

	else if (l >= 65 && l <= 90)
		printf("%c is an uppercase character.\n", l);

	else
		printf("That is not an alphabet charater.\n");

	return (0);
}
