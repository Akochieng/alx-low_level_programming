#include "main.h"
/**
  *_strdup - creates memory and copies str contents to it
  *@str: the string
  *Description: creates memory using malloc and copies contents of str
  *Return: NULL on failure, or pointer to copy of str
  */
char *_strdup(char *str)
{
	size_t len, i;
	char *temp = NULL;

	if (!(str))
		return (NULL);
	len = _strlen(str);
	temp = malloc(len + 1);
	if (temp == NULL)
		temp = NULL;
	if (temp)
	{
		for (i = 0; i < len; i++)
			temp[i] = str[i];
		temp[i] = '\0';
	}
	return (temp);
}
/**
  *_strlen - find the length of a string
  *@s: the string
  *
  *Return: the length of the string
  */
size_t _strlen(char *s)
{
	size_t len = 0;

	for (len = 0; *s; s++, len++)
		;
	return (len);
}
