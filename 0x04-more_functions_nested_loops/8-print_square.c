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
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a, b;
	
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				putchar('#');
			putchar('\n');
		}
	}
}
