#include "main.h"

/**
  *malloc_checked - allocates memory using malloc and exits with 98 on error
  *@b: the size of the memory
  *
  *Return: pointer to the memory location
  */
void *malloc_checked(unsigned int b)
{
	char *temp;

	temp = malloc(b);
	if (temp == NULL)
		exit(98);
	return (temp);
}
