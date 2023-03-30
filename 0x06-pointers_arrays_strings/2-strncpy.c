#include "main.h"
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
	while ((*dest == *src) && n--)
		;
	return (dest - n);
}
