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
	char *temp = a;

	state = OUT;
	do{
		if (state == OUT && ((*temp >= 'a' && *temp <= 'z') || (*temp >= 'A' && 'Z') \
					|| (*temp >= '0' && *temp <= '9')))
		{
			state = IN;
			*temp = (*temp >= 'a' && *temp <= 'z') ? 'A' + (*temp - 'a') : *temp;
		}
		else if (state == IN && (*temp == ' ' || *temp == '.' || *temp == '\n' \
				|| *temp == '\t'))
			state = OUT;
	}while (*temp++ != '\0');
	return (a);
}
