#include <stdio.h>

/**
  *main - prints the numbers 1 to 100
  *
  *Description: for multples of 3, Fizz and
  *Buzz for multiples of 5
  *Return: 0 for success.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
