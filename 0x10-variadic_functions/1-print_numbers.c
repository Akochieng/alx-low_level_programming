#include "variadic_functions.h"
/**
  *print_numbers - function to print the parameters passed in
  *@separator: the separator
  *@n: the number of parameters passed
  *
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}
	va_end(args);
}
