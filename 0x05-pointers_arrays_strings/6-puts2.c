#include "main.h"
/**
  *puts2 - prints every other character of a string
  *@str: string to be printed
  *Description: takes in a pointer to a string and prints alternate characters
  *followed by a new line
  *Return: void
  */
void puts2(char *str)
{
	int i;

	i = 0;
	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(*str);
		str++;
	}
	putchar('\n');
}
