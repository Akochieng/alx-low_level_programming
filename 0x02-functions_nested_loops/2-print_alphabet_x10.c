#include <stdio.h>

/**
  *main - check code
  *
  *Return: Always 0
  *
  *print_alphabet_x10 - prints the alphabet and a new line ten times
  *
  *Return: void
  *
  */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

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

