#include <stdio.h>
#include "main.h"

/**
  *print_sign - prints the sign of a number
  *@n: description of interger to be checked for sign
  *
  *Descreption: program that prints + if n is positive,
  *0 if 0 and -1 if less than 0
  *Return: 1 if posive, 0 if 0 and -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	} else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
