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
	int n, last_value;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_value = n % 10;
	if (last_value == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_value);
	else if (last_value > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_value);

	if (last_value > 0 && last_value < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_value);
	return (0);
}
