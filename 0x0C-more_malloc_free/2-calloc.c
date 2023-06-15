#include "main.h"
/**
  *_calloc - creates a memory location and sets them to 0
  *@nmemb: number of elements of size size
  *@size: the size of each of the elements
  *
  *Return: pointer to the newly created memory location
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res = NULL;
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	temp = (char *)res;
	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;
	return (res);
}
