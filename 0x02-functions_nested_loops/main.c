#include "main.h"
#include <stdio.h>

/**
  *_islower - checks whether character is lowercase
  *
  *Return: 1 is lowercase, 0 otherwise
  *
  */
int main(void)
{
	int r;
	
	r = print_last_digit(98);
	putchar('0' + r);
	putchar('\n');
	r = print_last_digit(0);
	putchar('0' + r);
	putchar('\n');
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	r = print_last_digit(1);
	putchar('0' + r);
	putchar('\n');

	return (0);
}
