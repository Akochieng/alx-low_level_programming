#include <stdio.h>

/**
  *print_alphabet_x10 - prints the alphabet and a new line ten times
  *
  *Return: void
  *
  */
void print_alphabet_x10(void)
{
	int c, i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
			putchar(c++);
		putchar('\n');
		i++;
	}
}

