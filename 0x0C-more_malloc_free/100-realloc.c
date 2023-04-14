#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
  *_realloc - function that reallocates a larger memory block to an array
  *@ptr: pointer to the old memory block
  *@old_size: size of the old memory block
  *@new_size: size of the new memory block
  *Description: function that reallocates a larger memory block to an array
  *with a larger space
  *Return: NULL if failed or pointer to new arr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;

	if (new_size == old_size && ptr != NULL)
		return (ptr);
	if (new_size > old_size || ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		if (ptr != NULL)
			memcpy(temp, ptr, old_size);
	}
	if (ptr != NULL)
		free(ptr);
	return (temp);
}
