#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
  *print_numbers - uses variadic functions to print in numbers
  *@separator: the separator of the numbers to be printed
  *@n: the number of variables
  *Description: the variadic functions to print in numbers
  *Return: void;
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list nums;

	if (separator == NULL)
		return;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%d", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
