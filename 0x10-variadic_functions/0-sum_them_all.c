#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - sums all the input parameters
  *@n: the number of parameters
  *
  *Description: sums all the parameters input. The number is not known
  *in advance.
  *Return: sum of the parameters put in
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
