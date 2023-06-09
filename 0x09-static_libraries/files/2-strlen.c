#include "main.h"
/**
  *_strlen - function that finds the length of a string
  *@s: pointer to the string
  *Description: uses pointers to compute the length of
  *a string
  *Return: returns the length of a string as an interger
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}
