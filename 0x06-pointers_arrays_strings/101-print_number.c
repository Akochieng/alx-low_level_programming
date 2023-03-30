#include "main.h"
/**
  *print_number - prints a number
  *@n: the interger to be printed
  *Description: prints an interger n using only putchar
  *Return: void
  */
void print_number(int n)
{
	do {
		putchar('0' + (n % 10));
		n = n / 10;
	}while (n > 9);
	putchar(n + '0');
}
