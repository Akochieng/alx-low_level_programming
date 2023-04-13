#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  *string_nconcat - copies s1 and n bytes of s2 into new memory location
  *@s1: first string
  *@s2: second string
  *@n: number of bytes from s2 to copy
  *Description: copies s1 and n bytes of s2 to a location created using malloc
  *Return: pointer to the new memory bloc or NULL if failed
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	s1 = (s1 == NULL) ? '\0' : s1;
	s2 = (s2 == NULL) ? '\0' : s2;
	p = malloc(strlen(s1) + n + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	strncat(p, s2, n);
	strcat(p, "");
	return (p);
}
