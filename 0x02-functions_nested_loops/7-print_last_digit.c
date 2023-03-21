#include "main.h"
#include <stdio.h>
/**
  *main - prints the last digit of a number
  *
  *@n: input digit
  *Description: prints the last digit of a number twice
  *Return: value of the last digit
  */
int print_last_digit(int n)
{
	while (n > 10)
		n = n % 10;
	n = n > 0 ? n : -n;
	putchar(n);
	return (n);
}
