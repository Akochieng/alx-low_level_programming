#include <stdio.h>
/**
  *_memset - fills the first n bytes pointed to by s with constant byte b
  *@s: the pointer to the memory area
  *@b: constant byte used to fill the memory area
  *@n: the number of bytest in s to be modified
  *Description: fills the first n bytes pointed to by s with constant
  *byte b
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	for (; n >= 1; n--)
	{
		*temp = b;
		temp++;
	}
	return (s);
}
