#include "main.h"
/**
  *is_palindrome - function that checks whether a string is a palindrome
  *@s: the string
  *
  *Return: 1 if palindrome and 0 otherwise
  */
int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen(s);
	return (pali_check(s, s + len - 1));
}
/**
  *pali_check - function that tests whether two characters are the same
  *@s: a character
  *@a: a character
  *
  *Return: 1 if equal and 0 if not
  */
int pali_check(char *s, char *a)
{
	if (s == a)
		return (1);
	if (!(*s == *a))
		return (0);
	if ((s + 1 == a) && (*s == *a))
		return (1);
	return (pali_check(s + 1, a - 1));
}
/**
  *_strlen - function to check the length of a string
  *@s: the string
  *
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	return (a);
}
