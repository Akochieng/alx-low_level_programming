#include <unistd.h>
/**
  *_putchar - prints a character
  *@c: the character
  *Description: prints a single character to the stdout
  *Return: the number of printed characters
  */
unsigned int _putchar(char c)
{
	return (write(1, &c, 1));
}
