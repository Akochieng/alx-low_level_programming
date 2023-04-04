#include "main.h"
/**
  *print_diagsums - prints the sum of the two diagonals of a square matrix
  *@a: the matrix
  *@size: the size of the matrix
  *Description: prints the sum of the two diagonals of a square matrix of
  *size size.
  *Return: null
  */
void print_diagsums(int *a, int size)
{
	int *ptr;
	int i, j, sumpos, sumneg;

	ptr = a;
	sumpos = sumneg = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if ((i + j) == (size - 1))
				sumneg = sumneg + *((ptr + j) + (i * size));
			if (i == j)
				sumpos = sumpos + *((ptr + j) + (i * size));
		}
	printf("%d, %d\n", sumpos, sumneg);
}
