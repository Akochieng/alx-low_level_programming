#include "main.h"
/**
  *binary_to_uint - converts a binary string to an unsigned int
  *@b: the binary string
  *
  *Return: the unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int mask = 1;
	unsigned int res = 0;

	len = parsebin(b);
	if (len == -1 || len == 0)
		return (0);
	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] == '\0')
			_putchar('X');
		if (b[len] == '1')
			res = res + mask;
		mask = mask << 1;
	}
	return (res);
}
/**
  *parsebin - the supporting function
  *@b: the binary string
  *
  *Return: the len or -1 on failure
  */
int parsebin(const char *b)
{
	int len;

	if (b == NULL)
		return (-1);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (!(b[len] == '1' || b[len] == '0'))
			return (-1);
	}
	return (len);
}
