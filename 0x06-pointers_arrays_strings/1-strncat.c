#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *@dest: the string that is appended to
  *@src: the string that is copied from
  *@n: the number of characters to append
  *Description: appends n characters from src to dest, overwriting the terminating
  *null byte at the end of dest
  *Return: dest(the resulting string)
  */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	
	for ( ; *dest++ != '\0'; )
		;
	while ((*src++ = *dest++) != '\0' && n--)
		;
	*dest = '\0';
	return (temp);
}
