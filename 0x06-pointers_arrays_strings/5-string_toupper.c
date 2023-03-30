#include "main.h"
/**
  *string_toupper - converst all lowercase letters of a string to upppercase
  *@c: pointer to the string being referenced
  *Description: converts all lowercase letters of a string to uppercase
  *Return: the converted string
  */
char *string_toupper(char *a)
{
	while (*a++ != '\0')
		*a = (*a >= 'a' && *a <= 'z') ? ('A' + (*a - 'a')) : *a;
	return (a);
}
