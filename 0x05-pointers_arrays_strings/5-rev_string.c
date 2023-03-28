#include "main.h"
/**
  *rev_string - prints a string in reverse followed by a new line
  *@s: the string to be reversed
  *Description: reverses a string
  *using a pointer as input
  *Return: void
  */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (s[len])
		len++;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

