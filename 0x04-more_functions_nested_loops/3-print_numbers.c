#include <stdio.h>

/**
  *print_numbers - prints numbers 0 to 9
  *
  *Description: prints numbers 0 to 9
  *Return: null
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
