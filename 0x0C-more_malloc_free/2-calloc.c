#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  *_calloc - allocates memory of nmemb elements of size bytes
  *@nmemb: number of elements
  *@size: size of each of the elements
  *Description: allocates memory of nmemb elements of size bytes and sets
  *them to 0
  *Return: 0 if successfull and NULL if failed.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int num = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	num = nmemb * size;
	p = malloc(num);
	if (p == NULL)
		return (NULL);
	memset(p, 0, num);
	return (p);
}
