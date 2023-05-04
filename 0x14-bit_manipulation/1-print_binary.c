#include "main.h"
/**
  *print_binary - prints an unsigned interger in binary
  *@n: the unsigned interger
  *Description: uses bitwise operators to print an unsigned int in binary
  *Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (a < n)
	{
		a = a << 1;
	}
	while (a)
	{
		if ((n & a) == 0)
		{
			if (!(a > n))
				_putchar('0');
		}
		else
			_putchar('1');
		a = a >> 1;
	}
}
