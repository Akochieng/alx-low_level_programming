#include "main.h"
/**
  *_atoi - converts a string to interger
  *@s: the input string
  *Description: converts a string to intergers while ignoring any
  *non intergers.
  *Return: the interger
  */
int _atoi(char *s)
{
	size_t result;
	int sign;
	int state = 0;

	sign = 1;
	result = 0;
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
			state = 1;
		}
		else
		{
			if (*s == '-' || *s == '+')
				sign = *s == '-' ? sign * -1 : sign;
			else if (state == 1)
				break;
		}
		s++;
	}
	return (result * sign);

}
