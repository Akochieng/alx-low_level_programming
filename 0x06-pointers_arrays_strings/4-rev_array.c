#include "main.h"
/**
  *reverse_array - reverses the content of an array of intergers
  *@a: pointer to the array
  *@n: the number of elements in the array
  *Description: reverses the content of an array of intergers
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = n - 1, d = 0; b >= n / 2; b--, d++)
	{
		c = a[d];
		a[d] = a[b];
		a[b] = c;
	}
}
