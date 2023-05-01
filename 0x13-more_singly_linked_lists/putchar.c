#include <unistd.h>
/**
  *_putchar - prints a character to the stdout
  *@c: the character to be printed
  *
  *Return: number of characters printed
  */
size_t _putchar(char c)
{
	return (write(1, &c, 1));
}
