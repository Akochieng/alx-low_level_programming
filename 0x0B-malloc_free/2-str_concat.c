#include "main.h"
/**
  *str_concat - concatanates two string and returns pointer to the new string
  *@s1: first string
  *@s2: the second string
  *Description: uses malloc
  *Return: pointer to the new string
  */
char *str_concat(char *s1, char *s2)
{
	char *temp = NULL;
	char *constr;
	size_t len;

	len = _strlen(s1) + _strlen(s2) + 1;
	temp = malloc(len);
	if (temp == NULL)
		temp = NULL;
	constr = temp;
	if (temp)
	{
		for ( ; *s1; s1++, temp++)
			*temp = *s1;
		for ( ; *s2; s2++, temp++)
			*temp = *s2;
		*temp = '\0';
	}
	return (constr);
}
/**
  *_strlen - function to compute length of a string
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
