#include "main.h"
/**
  *print_number - prints a number
  *@n: the interger to be printed
  *Description: prints an interger n using only putchar
  *Return: void
  */
void print_number(int n)
{
	int temp;

	temp = 0;
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n > 9)
	{
		temp = (temp * 10) + (n % 10);
		n = n / 10;
	}
	temp = (temp * 10) + n;
	while (temp > 9)
	{
		_putchar('0' + (temp % 10));
		temp = temp / 10;
	}
	_putchar(temp + '0');
}
