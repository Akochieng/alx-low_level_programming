#include <stdio.h>
/**
  *is_palindrome - checks whether a string is a palindrome
  *@s: the string to be checked.
  *Description: checks whether a string is a palindrome and 
  *returns 1 if a string and 0 if not.
  *Return: 1 if true and 0 if not.
  */
int is_palindrome(char *s)
{
	if (strlen(s) == 1)
		return (1);
	else
}
int strlen(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
int trim(char *s)
