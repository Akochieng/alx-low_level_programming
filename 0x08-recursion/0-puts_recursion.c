#include "main.h"

/**
  *_puts_recursion - prints a string to the std out
  *@s: the string
  *Description: uses recursion
  *Return: void
  */
void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
