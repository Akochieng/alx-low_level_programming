#include <stdio.h>
/**
  *_atoi - converts a string to interger
  *@s: the input string
  *Description: converts a string to intergers while ignoring any
  *non intergers.
  *Return: the interger
  */
int _atoi(char *s)
{
	int result;
	int sign;

	sign = 1;
	result = 0;
	while (*s != '\0')
	{
		if (*s == '-' || *s == '+')
			sign = *s == '-' ? sign * -1 : sign;
		if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		s++;
	}
	return (result * sign);

}
