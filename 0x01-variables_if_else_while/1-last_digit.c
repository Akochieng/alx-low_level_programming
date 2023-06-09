#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
  *main - prints whether the variable n is positive or negative
  *
  *Return: 0 if it runs successfully
  */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);

	if (last != 0 && last < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
