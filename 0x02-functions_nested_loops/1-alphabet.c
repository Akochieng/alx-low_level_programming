#include <stdio.h>
#include "main.h"

/**
  *print_alphabet - prints the alphabet and a new line
  *
  *Return: void
  *
  */
void print_alphabet(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
		putchar(c++);
	putchar('\n');
}

