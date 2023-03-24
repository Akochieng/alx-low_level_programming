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
		_putchar('-');
		n = -n;
	}
	int temp;

	temp = 0;
	while (n > 9)
	{
		temp = (temp + (n % 10)) * 10;
		n = n / 10;
	}
	temp = temp + n;
	while (temp > 9)
	{
		_putchar((temp % 10) + '0');
		temp = temp / 10;
	}

	_putchar(temp + '0');
}
