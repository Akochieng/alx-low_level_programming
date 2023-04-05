#include "main.h"
/**
  *_print_rev_recursion - prints a string in reverse
  *@s: string to be printed
  *Description: prints a string in reverse
  *Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		putchar (*s);
	_print_rev_recursion(++s);
}
