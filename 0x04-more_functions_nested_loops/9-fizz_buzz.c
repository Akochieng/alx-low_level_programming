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

	for (i = 0; i <= 100; i++)
	{
		if (!((i % 3 == 0) || (i % 5 == 0)))
			printf("%d", i);
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		putchar(' ');
	}
	putchar('\n');
}
