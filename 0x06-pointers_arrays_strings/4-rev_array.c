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
	int b, c;

	for (c = 0; c < n / 2; c++)
	{
		b = a[n - c];
		a[n - c] = a[c];
		a[c] = b;
	}
}
