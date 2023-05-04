#include "main.h"
#include <stddef.h>
/**
  *set_bit - sets bit at the specified index to 1
  *@n: the unsigned interger
  *@index: the location of the bit
  *Description: function to set the bit at the specified index
  *Return: 1 success or -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << index;
	if (n == NULL)
		return (-1);
	*n = *n | a;
	return (1);
}
