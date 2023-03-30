#include "main.h"
/**
  *string_toupper - converst all lowercase letters of a string to upppercase
  *@a: pointer to the string being referenced
  *Description: converts all lowercase letters of a string to uppercase
  *Return: the converted string
  */
char *string_toupper(char *a)
{
	char *temp = a;

	while (*temp != '\0')
	{
		*temp = (*temp >= 'a' && *temp <= 'z') ? ('A' + (*temp - 'a')) : *temp;
		temp++;
	}
	return (a);
}
