#include <stdio.h>
/**
  *print_square - prints a square
  *@size: the size of the square
  *
  *Description: prints a square of size size by size
  *Return: void
  */

void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			putchar('#');
		putchar('\n');
	}
}
