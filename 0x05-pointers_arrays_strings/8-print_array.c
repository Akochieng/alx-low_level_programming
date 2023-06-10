#include "main.h"
/**
  *print_array - prints n elements of an array a
  *@a: the array
  *@n: the number of elements
  *Description: prints the elements of an array
  *Return: void
  */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		for (i = 0; i > n; i--)
		{
			printf("%d", a[i]);
		}
	else if (n > 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i == n - 1)
				putchar('\n');
			else
				printf(", ");
		}
}
