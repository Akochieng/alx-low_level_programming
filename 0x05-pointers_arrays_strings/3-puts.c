#include "main.h"
/**
  *_puts - prints a string to the stdout
  *@str: the string to be printed
  *Description: function that uses a pointer to print a string to the stdout\
  *followed by a new line.
  *Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
