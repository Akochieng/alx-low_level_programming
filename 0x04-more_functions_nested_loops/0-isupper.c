#include <stdio.h>

/**
  *_isupper - checks whether a character is uppercase
  *@c: is the character to be tested
  *
  *Description: checks whether a character is upper
  *case and returns 1 or 0 otherwise
  *Return: 1 for uppercase and 0 otherwise.
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
