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
	int lens1, lens2;
	char *p = NULL;
	char *temp = NULL;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	lens1 = (s1 == NULL) ? 0 : strlen(s1);
	lens2 = (s2 == NULL) ? 0 : strlen(s2);

	p = (lens1 + lens2 == 0) ? NULL : malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (p == NULL)
		return (NULL);
	temp = p;
	temp = stpcpy(stpncpy(temp, s1, lens1), s2);
	return (p);
}
