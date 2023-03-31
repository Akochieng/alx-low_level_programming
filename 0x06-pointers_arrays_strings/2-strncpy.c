#include "main.h"
#define IN 1
#define OUT 0
/**
  *_strncpy - copies n characters of a string
  *@dest: the destination string
  *@src: the source string
  *@n: the number of characters to copy
  *Description: copies the first n characters of
  *a string
  *Return: returns the destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int state = IN;

	while (n >= 0)
	{
		if (state == IN)
			*temp = *src;
		else
			*temp = '\0';
		if (*src == '\0')
			state = OUT;
		src++;
		temp++;
		n--;
	}
	return (dest);
}
