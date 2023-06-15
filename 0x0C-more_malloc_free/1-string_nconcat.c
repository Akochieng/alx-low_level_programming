#include "main.h"
/**
  *string_nconcat - copies s1 and n bytes of s2 into newly created memory
  *@s1: first string
  *@s2: second string
  *@n: number of bytes to copy from s2
  *
  *Return: newly created string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp = NULL;
	unsigned int size = 0;
	unsigned int pos = 0;

	size = _strlen(s1) + n + 1;
	temp = malloc(size);
	if (temp == NULL)
		return (NULL);
	for (pos = 0; *s1 != '\0'; pos++)
		temp[pos] = *s1++;
	for ( ; (pos < size && *s2 != '\0'); pos++)
		temp[pos] = *s2++;
	temp[pos] = '\0';
	return (temp);
}
/**
  *_strlen - compute the length of a string s
  *@s: the string
  *
  *Return: the length of the string
  */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (!(s == NULL))
		for (len = 0; *s != '\0'; s++)
			len++;
	return (len);
}
