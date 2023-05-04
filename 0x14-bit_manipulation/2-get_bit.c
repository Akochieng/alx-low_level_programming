#include "main.h"
/**
  *get_bit - returns the bit at the specified index
  *@n: the unsigned int
  *@index: the index of the bit starting with 0
  *Description: uses bitwise operators to return the value of bit
  *Return: the value of the bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	a = a << (index);
	if ((n & a) == 0)
		return (0);
	else
		return (1);
}
