#include "main.h"
#include <stddef.h>
/**
  *clear_bit - sets the value of a bit to 0 at a given index
  *@n: pointer to the unsigned interger
  *@index: the index position to be changed
  *Description: uses bitwise operators to modify the value of a bit at a
  *specified index
  *Return: 1 if success or -1 otherwise
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (n == NULL)
		return (-1);
	a = a << index;
	a = ~a;
	*n = *n & a;
	return (1);
}
