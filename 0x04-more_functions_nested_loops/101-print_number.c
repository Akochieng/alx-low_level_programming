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
	int count, divider;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	count = n > 9 ? countnum(n) : 1;
	divider = 1;
	while (count-- > 0)
		divider = divider * 10;
	while (divider > 9)
	{
		_putchar((n / divider) + '0');
		divider = divider / 10;
		n = n % divider;
	}
	_putchar(n + '0');
}
/**
  *countnum - counts the length of a number
  *@n: the number
  *Description: calculates the length of a number
  *Return: the length of a number
  */
int countnum(int n)
{
	int count = 0;

	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
