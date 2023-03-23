#include <stdio.h>
/**
  *_isdigit - checks whether a character is a digit
  *@c: character to be tested
  *
  *Description: takes in a character c, tests whether
  *it is a digit and returns 1 or 0 if it is not
  *Return: 1 for a digit and 0 for a non digit
  */

int _isdigit(int c)
{
	int digit;

	digit = (c >= '0' && c <= '9') ? 1 : 0;
	return (digit);
}
