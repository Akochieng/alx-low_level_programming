#include <unistd.h>
/**
  *_putchar - prints a single character to the standard output
  *@c: the character
  *
  *Return: Always 1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
