#include "variadic_functions.h"
/**
 * print_strings - function that prints all strings arguments
 * @separator: the separator
 * @n: the number of arguments
 *
 * Return: void
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
		printf("%s", s == NULL ? "(nil)" : s);
		if (!(separator == NULL) && i < n - 1)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
	}
	va_end(args);
}
