#include "main.h"

/**
  *_print_rev_recursion - prints a string in reverse
  *@s: the string
  *Description: uses recursion
  *Return: void
  */
void _print_rev_recursion(char *s)
{
	char *temp = s;

	if (!(*s))
		return;
	_print_rev_recursion(++s);
	_putchar(*temp);
}
