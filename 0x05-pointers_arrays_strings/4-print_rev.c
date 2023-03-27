#include "main.h"
/**
  *print_rev - prints a string in reverse followed by a new line
  *@s: the string to be reversed
  *Description: reverses a string and prints the result to the standard output
  *using a pointer as input
  *Return: void
  */
void print_rev(char *s)
{
	int i;

	for (i = 0; *s++ != '\0'; i++)
		;
	s -= 1;
	while (i + 1)
	{
		_putchar(*(--s));
		i--;
	}
	_putchar('\n');
}
