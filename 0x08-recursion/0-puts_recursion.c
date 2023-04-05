#include "main.h"
/**
  *_puts_recursion - prints a sting followed by a newline
  *@s: the string
  *Description: print a string followed by a newline using recursion
  *Return: void
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(++s);
	}
}
