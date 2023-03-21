#include "main.h"
#include <stdio.h>

/**
  *_isalpha - checks whether character is lowercase
  *
  *Return: 1 is lowercase, 0 otherwise
  *
  */
int _isalpha(int c)
{
	int result;

	return (result = c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ? 1 : 0);
}
