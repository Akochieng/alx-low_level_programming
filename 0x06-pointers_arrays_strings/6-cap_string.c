#include "main.h"
#define IN 1
#define OUT 0
/**
  *cap_string - capitalises all the words in a string
  *@a: pointer to the string being referenced
  *Description: capitalises all the words in a string
  *Return: the capitalised string
  */
char *cap_string(char *a)
{
	int st;
	char *tp = a;

	st = OUT;
	do {
		if (st == OUT)
		{
			if (*tp >= 'a' && *tp <= 'z')
			{
				*tp = 'A' + (*tp - 'a');
				st = IN;
			}
			if (*tp >= 'A' && *tp <= 'Z')
				st = IN;
			if (*tp >= '0' && *tp <= '9')
				st = IN;
			}
		else if (st == IN)
			switch (*tp)
			{
				case ' ':
				case '.':
				case '\n':
				case '\t':
					st = OUT;
					break;
				default:
					break;
			}
	} while (*tp++ != '\0');
	return (a);
}
