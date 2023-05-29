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
	char sign = '+';

	if (n < 0)
	{
		sign = -1;
		putchar('-');
		count = n < -9 ? countnum(n) : 1;
	}
	else
		count = n > 9 ? countnum(n) : 1;
	divider = 1;
	while (count > 0)
	{
		divider = divider * 10;
		count--;
	}
	while (divider > 1)
	{
		n > 0 ? putchar((n / divider) + '0') : putchar((-n / divider) + '0');
		n = n % divider;
		divider = divider / 10;
	}
	n = n >= 0 ? n : -n;
	printf("%d",n);
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

	if (n > 9)
		for (count = 0; n > 9; count++)
			n = n / 10;
	else if (n < -9)
		for (count = 0; n < -9; count++)
			n = n / 10;
	return (count);
}
