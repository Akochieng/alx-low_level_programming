#include <stdio.h>

/**
  *print_number - prints a number using putchar
  *@n: number to be printed
  *
  *Description: prints a number n using putchar
  *Return: void
  */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	while (n > 9)
	{
		putchar((n % 10) + '0');
		n = n / 10;
	}
	putchar(n + '0');
	putchar('\n');
}
