#include "main.h"
/**
  *print_array - prints n elements of an array a
  *@a: the array
  *@n: the number of elements
  *Description: prints the elements of an array
  *Return: void
  */
void print_array(int *a __attribute__((unused)), int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (!(i == n - 1))
				printf(", ");
		}
	putchar('\n');
}
