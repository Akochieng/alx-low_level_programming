#include <stdio.h>
/**
  *puts2 - prints every other character of a string
  *@str: string to be printed
  *Description: takes in a pointer to a string and prints alternate characters
  *followed by a new line
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
