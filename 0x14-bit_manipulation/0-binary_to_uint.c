#include "main.h"
#include <stddef.h>
/**
  *binary_to_uint - converts a string of 0 and 1 characters to binary
  *@b: pointer to the string of characters
  *Description: converts binary to unsigned int
  *Return: converted number or 0 if b is null
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int c = 0;

	if (b == NULL)
		return (0);
	for ( ; *b != '\0'; b++)
	{
		if (!(*b == '0' || *b == '1'))
			return (0);
		c = *b == '1' ? 1 : 0;
		a = (a << 1) | c;
	}
	return (a);
}


