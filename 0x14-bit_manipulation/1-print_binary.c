#include "main.h"
/**
  *print_binary - prints an unsigned int to the stdout
  *@n: the number
  *
  *Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int a = 1;

	theprinter(a, n);
}
/**
  *theprinter - prints an unsigned int to the stdout
  *@a: the mask
  *@n: the number
  *
  *Return: void
  */
void theprinter(unsigned long int a, unsigned long int n)
{
	unsigned long int temp = 0;

	if (a < n)
		theprinter(a << 1, n);
	temp = a & n;
	temp == 0 ? _putchar('0') : _putchar('1');
}
