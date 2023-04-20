#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - using a separator, prints all the input character arrays
  *@separator: the separator
  *@n: the number of variables to be printed
  *Description: takes in a separator, n number of character arrays, the
  *character arrays and prints the character arrays with the separator
  *as the separator
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list stngs;

	if (separator == NULL)
		return;
	va_start(stngs, n);
	i = 0;
	for (i = 0; i < n; i++)
	{
		temp = va_arg(stngs, char *);
		if (temp == NULL)
			printf("nil");
		printf("%s", temp);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
