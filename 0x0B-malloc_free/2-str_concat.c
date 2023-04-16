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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	p = (lens1 + lens2 == 0) ? NULL : malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (p == NULL)
		return (NULL);
	temp = p;
	temp = stpcpy(stpncpy(temp, s1, lens1), s2);
	return (p);
}
/**
  *_strlen: calculate the length of a string
  *@s: the string
  *
  *Return: length of the string
  */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; ++len)
		s++;
	return (len);
}
