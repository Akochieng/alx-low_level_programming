#include "main.h"
#define ON 1
#define OFF 0
/**
  *_strstr - finds the first occurence of a substring.
  *@needle: the substring
  *@haystack: the string in which we are finding needle
  *Description: finds the first occurence of needle in
  *haystack
  *Return: returns a pointer to the beginning of the substring or NULL
  */
char *_strstr(char *haystack, char *needle)
{
	char *pos = NULL;
	char *temp = needle;
	int state;

	state = OFF;
	if (*needle == '\0')
		pos = haystack;
	else
		while (*haystack != '\0')
		{
			if (*temp == '\0')
				break;
			else if (state == ON && *haystack == *temp)
			{
				temp++;
			}
			else if (state == ON && *haystack != *temp)
			{
				temp = needle;
				state = OFF;
				pos = NULL;
			}
			else if (state == OFF && *haystack == *temp)
			{
				state = ON;
				pos = haystack;
				temp++;
			}
			haystack++;
		}
	return (pos);
}
