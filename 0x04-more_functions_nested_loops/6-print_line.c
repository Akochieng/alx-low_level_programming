#include <stdio.h>

/**
  *print_line - draws a line in the terminal
  *@n: the length of the line
  *
  *Description: draws a line in the terminal
  *of length determined by n
  *Return: void
  */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
