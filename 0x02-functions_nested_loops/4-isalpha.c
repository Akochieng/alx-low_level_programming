#include "main.h"
#include <stdio.h>

/**
  *_isalpha - checks whether character is an alphabet letteer
  *
  *@c: the character to be tested
  *Description: the function checks whether a character is an alphabet letter
  *Return: 1 is lowercase, 0 otherwise
  *
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
