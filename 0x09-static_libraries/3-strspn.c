#include "main.h"
/**
  *_strspn - gets the length of a prefix substring
  *@s: the substring
  *@accept: finds the number of bytes in the initial segment of s which consist
  *of bytes from accept
  *Return: number of bytes in the initial segment of s which consist only of
  *bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	char *temp = accept;
	unsigned int n = 0;

	while (*s != '\0')
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				n += 1;
				break;
			}
		}
		if (*temp == '\0')
			break;
		s++;
	}
	return (n);
}
