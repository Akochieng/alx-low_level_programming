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
	if (n > 0)
		for (; n > 0; --n)
		{
			printf("%d", *a++);
			if (n == 1)
				putchar('\n');
			else
				printf(", ");
		}
}
