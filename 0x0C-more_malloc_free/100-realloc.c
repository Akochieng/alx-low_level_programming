#include "main.h"
/**
  *_realloc - creates new array of size new_size and copy contents from ptr
  *@ptr: pointer to old memory
  *@old_size: the current size of ptr
  *@new_size: the new size of the memory
  *
  *Return: pointer to the created memory
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
/**
  *dup_mem - copies contents of one memory to the other
  *@src: the memory location to be copied from
  *@dest: the memory location to be copied to
  *@n:the number of bytes to be copied
  *
  *Return: void
  */
void dup_mem(void *src, void *dest, unsigned int n)
{
	unsigned int i;
	char *source = (char *)src;
	char *destination = (char *)dest;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
}
