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
	int state;

	state = OUT;
	do{
		if (state == OUT && ((*a >= 'a' && *a <= 'z') || (*a >= 'A' && 'Z') \
					|| (*a >= '0' && *a <= '9')))
		{
			state = IN;
			*a = (*a >= 'a' && *a <= 'z') ? 'A' + (*a - 'a') : *a;
		}
		else if (state == IN && (*a == ' ' || *a == '.' || *a == '\n' \
				|| *a == '\t'))
			state = OUT;
		else if (state == IN && (*a >= 'A' && *a <= 'Z'))
			*a = 'a' + (*a - 'A');
	}while (*a++ != '\0');
	return (a);
}
