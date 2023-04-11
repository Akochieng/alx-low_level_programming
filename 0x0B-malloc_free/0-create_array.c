#include "main.h"
/**
  *create_array - creates an array of chars and initialises it with a character
  *@size: the size of the array to be created
  *@c: the characters to initialise the array
  *Description: uses malloc to create an array and initialise it using
  *character c
  *Return: pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);

		if (p == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*(p + i) = c;
	}
	return (p);
}
