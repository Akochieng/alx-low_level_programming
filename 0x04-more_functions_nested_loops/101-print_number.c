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
	int temp;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	temp = 0;
	while (n > 9)
	{
		temp = (temp + (n % 10)) * 10;
		n = n / 10;
	}
	temp = temp + n;
	while (temp > 9)
	{
		putchar((temp % 10) + '0');
		temp = temp / 10;
	}

	putchar(temp + '0');
}
