#include <stdio.h>
#include <main.h>

/**
  *main - check code
  *
  *Return: Always 0
  *
  *print_alphabet - prints the alphabet and a new line
  *
  *Return: void
  *
  */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
}

