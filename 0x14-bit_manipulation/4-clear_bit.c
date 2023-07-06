#include "main.h"
/**
  *clear_bit - function that clears bits at a specified index
  *@n: the unsigned number
  *@index: the index
  *
  *Return: 1 on success or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << index;
	a = ~a;
	*n = *n & a;
	return (1);
}
