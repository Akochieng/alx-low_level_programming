#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	int i, s;

	va_list args;
	va_start(args, count);
	for (i = 0; i < count; i++)
	{
		int x = va_arg(args, int);
		s + = x;
	}
	va_end(args);
	return s;

}
