#include "main.h"
/**
  *set_bit - sets a bit to 1
  *@n: pointer to the number
  *@index: the index
  *
  *Return: 1 if successful, -1 otherwise
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << index;
	*n = *n | a;
	return (1);
}
