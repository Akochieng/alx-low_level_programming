#include "main.h"
/**
  *_strcpy - copies a string to a destination
  *@dest: target location
  *@src: source string
  *Description: takes in pointers to two strings and copies contents from a src
  *to a destination.
  *Returns: dest a pointer to the destination string
  */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
