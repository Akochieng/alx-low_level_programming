#include <stdio.h>
#define OK 1
#define NOK -1
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
	int sum = 0;
	int state = OK;

	if (argc >= 2)
		while (--argc)
			sum = sum + _atoi2(*++argv, &state);
	else
		printf("%s\n", "Error");
	if (state == OK)
		printf("%d\n", sum);
	else
		printf("%s\n", "Error");
	return (0);
}
/**
  *_atoi2 - function that converts a string of numbers into intergers
  *@strng:the string
  *@state:state is set to NOK if character is not between 0 and 9
  *Description:takes in a string and converts it into an interger
  *Return:the interger
  */
int _atoi2(char *strng, int *state)
{
	int num = 0;
	int sign = 1;

	while (*strng != '\0')
	{
		if (*strng == '-')
			sign = sign * -1;
		else if (*strng >= '0' && *strng <= '9')
			num = (num * 10) + (*strng - '0');
		else
			*state = -1;
		strng++;
	}
	return (num * sign);
}
