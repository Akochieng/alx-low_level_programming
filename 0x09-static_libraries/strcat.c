#include <stdio.h>
/**
  *_strcat - function that concatenates two strings
  *@dest: the string that is appended to
  *@src: the string that is copied from
  *Description: appends src to dest, overwriting the terminating
  *null byte at the end of dest
  *Return: dest(the resulting string)
  */
char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;
	for (; *temp++ != '\0';)
		;
	temp = temp - 1;
	while (*src != '\0')
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}

