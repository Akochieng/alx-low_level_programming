#include <stdio.h>
/**
  *_strcmp - compares two strings
  *@s1: the first string
  *@s2: the second string
  *Description: compares two strings and returns the difference in value
  *between the first two characters that differ using the ASCII codes or
  *0 if they are equal.
  *Return: 0 if equal, and the diffence between the first nonequal characters
  */


int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((*s1 == '\0' && *s2 == '\0') ? 0 : *s1 - *s2);
}
