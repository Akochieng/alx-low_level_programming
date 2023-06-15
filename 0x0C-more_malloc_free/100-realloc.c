#include "main.h"
/**
  *
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	temp = malloc(new_size);
	if (temp == NULL)
		return (NULL);
	if (!(ptr == NULL))
	{
		size = new_size > old_size ? old_size : new_size;
		dup_mem(ptr, temp, size);
		free(ptr);
	}
	return (temp);
}

void dup_mem(void *src, void *dest, unsigned int n)
{
	unsigned int i;
	char *source = (char *)src;
	char *destination = (char *)dest;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
}
