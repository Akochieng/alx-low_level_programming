#include <stdio.h>
#include <stddef.h>
/**
  *_strpbrk - locates the first occurence in s of the bytes in accept
  *@s: the string
  *@accept: the bytes to be searched for
  *Description: locates the first occurence of the bytes in string
  *accept in the string s.
  *Return: pointer to the byte in s that matches one of the bytes in accept
  *or null if none is found.
  */
char *_strpbrk(char *s, char *accept)
{
	char *pos = NULL;
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		for (; *temp != '\0';)
		{
			if (*temp == *s)
			{
				pos = s;
				return (pos);
			}
			temp++;
		}
		s++;
	}
	return (pos);
}
