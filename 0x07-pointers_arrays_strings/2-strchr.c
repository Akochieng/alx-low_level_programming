#include "main.h"
/**
  *_strchr - locates a character in a string
  *@s: the string
  *@c: the character to be located
  *Description: function that locates a character c in a string s
  *Return: pointer to the first occurence of thc character c or null if not
  *found
  */
char *_strchr(char *s, char c)
{
	char *temp = NULL;

	for (;;)
	{
		if (*s == '\0')
			break;
		else if (*s == c)
		{
			*temp = *s;
			break;
		}

		s++;
	}
	return (temp);
}
