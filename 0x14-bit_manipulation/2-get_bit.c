#include "main.h"
/**
  *get_bit - gets value of the bit at location index
  *@n: the number
  *@index: the index location
  *
  *Return: the value of the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << index;
	if (a > n)
		return (-1);
	if ((a & n) == 0)
		return (0);
	return (1);
}
