#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: string to be printed
  *Description: prints the second half of a string
  *followed by a new line
  *Return: void
  */
void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		str++;
	str = str - i / 2;
	while (*str != '\0')
		putchar(*str++);
	putchar('\n');
}
