#include "variadic_functions.h"
/**
 * print_numbers - function that prints all interger arguments
 * @separator: the separator
 * @n: the number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (!(separator == NULL) && i < n - 1)
			printf("%s", separator);
		else if (i == n - 1)
			printf("\n");
	}
	va_end(args);
}
