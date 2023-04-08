#include <stdio.h>
#include "main.h"
/**
  *main - function that multiplies two arguments
  *@argc: the number of arguments
  *@argv: the variables to be multiplied
  *Description: function that multiplies two arguments input as args
  *and returns the result.
  *Return: the result of the multiplication or Error.
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	else
		printf("%s\n", "Error");
	return (0);
}
/**
  *_atoi - function that converts a string of numbers into intergers
  *@strng: the string
  *Description: takes in a string and converts it into an interger
  *Return: the interger
  */
int _atoi(char *strng)
{
	int num = 0;
	int sign = 1;

	while (*strng != '\0')
	{
		if (*strng == '-')
			sign = sign * -1;
		else if (*strng >= '0' && *strng <= '9')
			num = (num * 10) + (*strng - '0');
		strng++;
	}
	return (num * sign);
}
