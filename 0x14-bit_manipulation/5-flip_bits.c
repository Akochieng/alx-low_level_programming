#include "main.h"
/**
  *flip_bits - returns the number of bits needed to flip from one number
  *to another
  *@n: one of the numbers
  *@m: the other number
  *Description: uses bitwise operators to determine the number of bits
  *needed to flip from one number to the other
  *Return:the number of flipped bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int checker = 1;
	unsigned int bits = 0;
	unsigned long int test;

	if (n == m)
		return (0);
	test = n ^ m;
	while (checker <= test)
	{
		if (!((checker & test) == 0))
			bits += 1;
		checker = checker << 1;
	}
	return (bits);
}
