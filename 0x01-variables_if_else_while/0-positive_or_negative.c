#include <stdio.h>
#include <time.h>
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
		printf("is zero");
	else if (n < 0)
		printf("is negative");
	else
		printf("is positive");
	return (0);
}
