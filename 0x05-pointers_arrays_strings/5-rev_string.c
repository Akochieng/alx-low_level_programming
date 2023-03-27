#include "main.h"
/**
  *rev_string - prints a string in reverse followed by a new line
  *@s: the string to be reversed
  *Description: reverses a string
  *using a pointer as input
  *Return: void
  */
void rev_string(char *s)
{
	int i;

	for (i = 0; *s++ != '\0'; i++)
		;
	while (i + 1)
	{
		_putchar(*(--s));
		i--;
	}
	_putchar('\n');
}
