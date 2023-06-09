#include "main.h"
#include <stdio.h>

/**
  *_islower - checks whether character is lowercase
  *
  *@c: character to be checked
  *Description: short function to check whether a character is lower case
  *Return: 1 is lowercase, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
