#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  *main - prints whether the variable n is positive or negative
  *return: 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("is zero\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is positive\n");
	return (0);
}
