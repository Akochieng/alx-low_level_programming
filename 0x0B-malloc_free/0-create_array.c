#include "main.h"
/**
  *create_array - creates an array oc chars and initialises them to char
  *@size: size of the array
  *@c: the character
  *Description: creates an array using malloc and initialises them to char
  *Return: the created array
  */
char *create_array(unsigned int size, char c)
{
	char *temp = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	temp = malloc(size);
	if (temp == NULL)
		temp = NULL;
	if (temp)
		for (i = 0; i < size; i++)
			temp[i] = c;
	return (temp);
}
