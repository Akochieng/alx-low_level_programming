#include <stdio.h>
/**
  *print_diagonal - prints a diagonal line
  *@n: the length of the diagonal line
  *
  *Description: prints a diagonal line of
  *length n
  *Return: void
  */
void print_diagonal(int n)
{
	int a, i;

	for (i = 0; i <= n; i++)
	{
		a = i - 1;
		while (a > 0)
		{
			putchar(' ');
			a--;
		}
		putchar('\\');
		putchar('\n');
	}
}
