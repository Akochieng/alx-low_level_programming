#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (num = 0; num < size; num++)
		p[num] = 0;
	return (p);
}
