#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  *main - prints whether the variable n is positive or negative
  *
  *Return: 0 if it runs successfully
  */
int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
