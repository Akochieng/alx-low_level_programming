#include <stdio.h>
/**
  *print_triangle - prints a triangle
  *@size: the size of the triangle
  *
  *Description: prints a triangle of the size size
  *Return: void
  */

void print_triangle(int size)
{
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		b = a;
		while ((size - b) > 0)
		{
			putchar(' ');
			b++;
		}
		c = a;
		while (c-- >= 1)
			putchar('#');
		putchar('\n');
	}
}
