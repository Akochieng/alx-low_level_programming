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
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int c, i;

	c = 'a';
	i = 0;
	while (i < 10)
	{
		while (c <= 'z')
			putchar(c++);
		putchar('\n');
		i++;
	}
}

