#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
/**
  *print_all - function that prints anything
  *@format: the format of the input
  *Description:
  */
void print_all(const char * const format, ...)
{
	int len, i, a;
	va_list nthng;
	char c;
	char *s;
	float t;
	const char *ptr = format;

	a = 0;
	len = strlen(ptr);
	va_start(nthng, format);
	while (ptr && ptr[a])
	{
		switch (*(ptr + a))
		{
			case ('c'):
				c = va_arg(nthng, int);
				printf("%c", (char)c);
				printf("%s", a < len - 1 ? ", " : "\n");
				break;
			case ('i'):
				i = va_arg(nthng, int);
				printf("%d", i);
				printf("%s", a < len - 1 ? ", " : "\n");
				break;
			case ('f'):
				t = va_arg(nthng, double);
				printf("%f", (float)t);
				printf("%s", a < len - 1 ? ", " : "\n");
				break;
			case ('s'):
				s = va_arg(nthng, char *);
				printf("%s", s);
				printf("%s", a < len - 1 ? ", " : "\n");
				break;
		}
		a++;
	}
	va_end(nthng);
}
