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
	int capital;

	capital = (c >= 65 && c <= 90) ? 1 : 0;
	return (capital);
}
