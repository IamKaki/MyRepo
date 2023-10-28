#include <stdio.h>

/**
  *
  *
  */

int main(void)
{
	int m, e, s;

	printf("Enter marks for math, english and swahili respectively.\n");
	scanf("%d", &m);
	scanf("%d", &e);
	scanf("%d", &s);

	int t = (m + e + s);

	if (t >= 40 && m >= 33 && e >= 33 && s >= 33)
		printf("You have passed the exam.\n");
	else
		printf("Sorry, you have failed the exam.\n");
	return (0);
}
