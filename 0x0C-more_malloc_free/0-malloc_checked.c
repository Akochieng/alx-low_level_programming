#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked - allocates memory using malloc
  *@b: the number of bytes to be allocated
  *Description: allocates memory using malloc, and returns pointer to the
  *allocated memory
  *Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}