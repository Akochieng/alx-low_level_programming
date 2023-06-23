#include "variadic_functions.h"

/**
  *print_strings - prints strings follwed by a new line
  *@separator: the separator
  *@n: the number of parameters
  *
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		printf("%s", s);
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
			else
				printf("\n");
		}
	}
	va_end(args);
}
