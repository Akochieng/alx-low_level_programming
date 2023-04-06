#include "main.h"
/**
  *is_palindrome - checks whether a string is a palindrome
  *@s: the string to be checked.
  *Description: works with two helper functions: strlen and pali_checker
  *to establish whether a string is a palindrome or not
  *returns 1 if a string and 0 if not.
  *Return: 1 if true and 0 if not.
  */
int is_palindrome(char *s)
{
	int len, res;
	char *temp;

	res = len = 0;
	_strlen(s, &len);
	if (len < 1 || len == 1)
		res = 1;
	else
	{
		temp = s + (len - 1);
		res = (pali_checker(s, temp));
	}
	return (res);
}
/**
  *_strlen - check the length of a string
  *@s: string whose length is to be computed.
  *@len: pointer to the length of the string
  *Description: loops through a string to determine its length.
  *Return: void
  */
void _strlen(char *s, int *len)
{
	while (*s != '\0')
	{
		s++;
		*len += 1;
	}
}
/**
  *pali_checker - compares two characters to establish whether they are equal.
  *@s: pointer to the beginning of the string
  *@temp: pointer to the end of the string
  *Description: compares the character at the end and beginning of a string
  *and returns 1 if equal or 0 otherwise.
  *Return: 1 if equal or 0 if not.
  */
int pali_checker(char *s, char *temp)
{
	int eq = 1;

	if (s == temp || s > temp)
		eq = 1;
	else
		eq = *s == *temp ? (eq && pali_checker(s + 1, temp - 1)) : 0;
	return (eq);
}
