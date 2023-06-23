#include "variadic_functions.h"
/**
 * print_all - function that prints all arguments
 * @format: a list of the types of arguments passed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, a;
	int d;
	float f;
	unsigned int i = 0;

	if (!(format == NULL))
	{
		va_start(args, format);
		while ((a = format[i++]) != '\0')
		{
			switch (a)
			{
				case('c'):
					d  = va_arg(args, int);
					printf("%c", d);
					break;
				case('i'):
					d = va_arg(args, int);
					printf("%d", d);
					break;
				case('f'):
					f = va_arg(args, double);
					printf("%f", f);
					break;
				case('s'):
					s = va_arg(args, char *);
					printf("%s", s == NULL ? "(nil)" : s);
					break;
				default:
					continue;
			}
		if (!(format[i] == '\0'))
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
