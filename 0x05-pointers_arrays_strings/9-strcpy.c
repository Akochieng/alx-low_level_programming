#include "main.h"
/**
  *_strcpy - copies a string to a destination
  *@dest: target location
  *@src: source string
  *Description: takes in pointers to two strings and copies contents from a src
  *to a destination.
  *Return: dest a pointer to the destination string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 1; (*dest++ = *src++) != '\0'; i++)
		;
	return (dest - i);
}
