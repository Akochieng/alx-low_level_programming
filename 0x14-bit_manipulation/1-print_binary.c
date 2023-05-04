#include "main.h"
/**
  *print_binary - prints an unsigned interger in binary
  *@n: the unsigned interger
  *Description: uses bitwise operators to print an unsigned int in binary
  *Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int a = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	a = 
	_putchar('0' + 
}
