#include <stdio.h>

void print_b4_main(void) __attribute__((constructor));
/**
  *print_b4_main - function that prints a string before the main function
  *
  *Return: void
  */

void print_b4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
