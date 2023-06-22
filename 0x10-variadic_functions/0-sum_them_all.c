#include "variadic_functions.h"
/**
  *sum_them_all - takes in a list of variable arguments and returns their sum
  *@n: the number of the args
  *
  *Return: sum of the args
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int temp, sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, int);
		sum += temp;
	}
	return (sum);
}
