#include <stdio.h>
#include "main.h"

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
		_putchar('-');
		n = -n;
	}
	temp = 0;
	while (n > 9)
	{
		temp = temp * 10 + n % 10;
		n = n / 10;
	}
	temp = temp * 10 + n;
	while (temp > 9)
	{
		_putchar((temp % 10) + '0');
		temp = temp / 10;
	}
	_putchar(temp + '0');
}
