#include "main.h"
#include <string.h>
/**
  *str_concat - concatanates two strings
  *@s1: first string
  *@s2: second string
  *Description: concatanates s1 and s2 and store copy in new location
  *Return: pointer to new location of s1 followed by s2 concatanated
  */
char *str_concat(char *s1, char *s2)
{
	int size;
	char *p = NULL;
	char *temp = NULL;

	size = strlen(s1) + strlen(s2);
	p = malloc(sizeof(char) * size);
	temp = stpcpy(s2, stpcpy(s1, p));
	return (p);
}
