#include "main.h"
/**
  *flip_bits - checks the number of bits needed to make to ints equal
  *@n: the first num
  *@m: the second num
  *
  *Return: the number of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int comp = 0;
	unsigned int res = 0;
	unsigned int bit = 1;

	comp = n ^ m;
	while (bit <= comp)
	{
		if ((bit & comp) > 0)
			res++;
		bit = bit << 1;
	}
	return (res);
}
