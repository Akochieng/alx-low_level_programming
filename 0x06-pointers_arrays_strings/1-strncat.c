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
	char *temp;

	temp = dest;	
	for ( ; *temp++ != '\0'; )
		;
	temp = temp - 1;
	while ((*temp++ = *src++) != '\0' && --n)
		;
	*temp = '\0';
	return (dest);
}
