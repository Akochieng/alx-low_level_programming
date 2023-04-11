#include "main.h"
#include <string.h>
/**
  *_strdup - returns a pointer to a newly allocated memory space with a string
  *@str: the string that will be copied to the new memory location
  *Description: creates an array of size str and returns pointer to array
  *with copy of string created using malloc
  *Return: pointer to the new memory location
  */
char *_strdup(char *str)
{
	int size = 0;
	char *p = NULL;
	char *temp;

	if (str == NULL)
		return (NULL);
	else
	{
		size = strlen(str) + 1;
		p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
		temp = p;
		while (size--)
			*temp++ = *str++;
	}
	return (p);
}
