#include <stdio.h>
/**
  *_memcpy -  copies n bytes from memory area src to memory area dest
  *@dest: the points to the memory location to be copied to
  *@src: points to the memory location to be copied from
  *@n: the number of bytes to be copied
  *Description: function copies n bytes of data from memory area src
  *to memory area dest
  *Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	for (; n >= 1; n--)
	{
		*temp++ = *src++;
	}
	return (dest);
}
